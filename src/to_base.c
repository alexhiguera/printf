/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:26 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/07 19:31:21 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(char *len)
{
	size_t	i;

	i = 0;
	while (len[i])
		i++;
	return (i);
}

int	to_base(int n, char *base)
{
	int		i;
	int		lenbase;

	i = 0;
	lenbase = ft_strlen(base);
	if (n == 0)
		return (0);
	if (n < 0)
	{
		n *= (-1);
		i++;
		ft_putchar('-');
	}
	if (n >= lenbase)
		i = to_base((n / lenbase), base);
	i += ft_putchar(base[n % lenbase]);
	return (i);
}

int	main(void)
{
	to_base(155, HEXADECIMAL_UP);
	return (0);
}
