/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:18 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/07 18:51:49 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		result++;
	}
	return (result);
}
/* 
int	main(void)
{
	char	*caca;

	caca = "colega";
	ft_putstr(caca);
	return (0);
} */
