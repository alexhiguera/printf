/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:42 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/08 19:35:33 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/ft_printf.h"
#include <stdio.h>

void	test_cs(void)
{
	int	n1;
	int	n2;

	n1 = ft_printf("HOLA SOY ANDER\n");
	n2 = printf("HOLA SOY ANDER\n");
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("HOL%c SOY%cAN%cER\n", 'A', ' ', 'D');
	n2 = printf("HOL%c SOY%cAN%cER\n", 'A', ' ', 'D');
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("HOLA SOY %s\n", "ANDER");
	n2 = printf("HOLA SOY %s\n", "ANDER");
	printf("%d %d\n", n1, n2);
}

void	test_di(void)
{
	int	n1;
	int	n2;

	n1 = ft_printf("%d\n", 500);
	n2 = printf("%d\n", 500);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%i\n", 500);
	n2 = printf("%i\n", 500);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%d\n", (int)-2147483648);
	n2 = printf("%d\n", (int)-2147483648);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%i\n", 0);
	n2 = printf("%i\n", 0);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%d\n", 2147483647);
	n2 = printf("%d\n", 2147483647);
	printf("%d %d\n", n1, n2);
}

void	test_boux(void)
{
	int	n1;
	int	n2;

	ft_printf("%b\n", 69420);
	n1 = ft_printf("%o\n", 69420);
	n2 = printf("%o\n", 69420);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%u\n", 69420);
	n2 = printf("%u\n", 69420);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%x\n", 69420);
	n2 = printf("%x\n", 69420);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%X\n", 69420);
	n2 = printf("%X\n", 69420);
	printf("%d %d\n", n1, n2);
}

void	test_p(void)
{
	int	n1;
	int	n2;

	n1 = ft_printf("%p\n", &n1);
	n2 = printf("%p\n", &n1);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%p\n", (void *)1);
	n2 = printf("%p\n", (void *)1);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%p\n", (void *)-1);
	n2 = printf("%p\n", (void *)-1);
	printf("%d %d\n", n1, n2);
	n1 = ft_printf("%p\n", (void *) NULL);
	n2 = printf("%p\n", (void *) NULL);
	printf("%d %d\n", n1, n2);
}

int	main(void)
{
	test_cs();
	test_di();
	test_boux();
	test_p();
	return (0);
}
