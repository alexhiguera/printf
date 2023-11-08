/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:18 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/08 19:09:47 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

void	pf_putbase(unsigned long n, char *base, int *result)
{
	size_t	lenbase;

	lenbase = pf_strlen(base);
	if (n >= lenbase)
		pf_putbase((n / lenbase), base, result);
	pf_putchar(base[n % lenbase], result);
}

void	pf_putsigned(int n, int *result)
{
	if (n < 0)
	{
		pf_putchar('-', result);
		pf_putbase((unsigned int)(-n), DECIMAL, result);
	}
	else
		pf_putbase((unsigned int)n, DECIMAL, result);
}

void	pf_putpointer(void *ptr, int *result)
{
	pf_putstr(PTR_PREFIX, result);
	pf_putbase((unsigned long)ptr, HEXADECIMAL_LO, result);
}
