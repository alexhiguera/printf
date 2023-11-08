/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:36 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/07 19:44:01 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formater(char const *format, int i, va_list src)
{
	int	i;

	i = 0;
	if (format[i + 1] == 'c')
		i += ft_putchar((char)va_arg(src, int));
	if else (format[i + 1] == 's')
		i = 0;
}

int	ft_printf(char const *h, ...)
{
	int		i;
	int		result;
	va_list	src;

	i = 0;
	result = 0;
	va_start(src, h);
	while (h[i] != '\0')
	{
		if (h[i] == '%')
		{
			/* haz cosas */
		}
		else
		{
			ft_putchar(h[i]);
			i++;
		}
	}
/*          	...            */

	va_end(src);
	return (i + result);
}

/* int	main(void)
{
	ft_printf();
	return (0);
} */
