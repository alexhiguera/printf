/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:57:13 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/07 18:59:10 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DECIMAL		"0123456789"
# define HEXADECIMAL_UP "0123456789ABCDEF"
# define HEXADECIMAL_LO "0123456789abcdef"
# define OCTAL			"01234567"
# define BINARI			"01"

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	to_base(int n, char *base);

#endif