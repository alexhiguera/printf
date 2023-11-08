/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:55:56 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/08 18:56:12 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
