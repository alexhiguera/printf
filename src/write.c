/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:55:56 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/10 23:57:13 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	pf_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	pf_betterwrite(void *buf, size_t len, int *result)
{
	ssize_t	w;

	if (*result == -1)
		return ;
	w = write(STDOUT_FILENO, buf, len);
	if (w == -1)
		*result = -1;
	else
		*result += w;
}

void	pf_putchar(char c, int *result)
{
	pf_betterwrite(&c, 1, result);
}

void	pf_putstr(char *str, int *result)
{
	if (str == NULL)
		return (pf_putstr(NULL_STR, result));
	pf_betterwrite(str, pf_strlen(str), result);
}
