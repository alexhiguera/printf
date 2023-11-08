/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:57:13 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/08 19:08:40 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define DECIMAL		"0123456789"
# define HEXADECIMAL_UP "0123456789ABCDEF"
# define HEXADECIMAL_LO "0123456789abcdef"
# define OCTAL			"01234567"
# define BINARY			"01"

# define PTR_PREFIX		"0x"
# define NULL_STR		"(null)"

size_t	pf_strlen(char *str);

void	pf_betterwrite(void *buf, size_t len, int *result);

void	pf_putchar(char c, int *result);
void	pf_putstr(char *str, int *result);
void	pf_putbase(unsigned long n, char *base, int *result);
void	pf_putsigned(int n, int *result);
void	pf_putpointer(void *ptr, int *result);

int		ft_printf(char const *str, ...);

#endif