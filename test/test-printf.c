/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:42 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/10 13:31:59 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/ft_printf.h"
#include <stdio.h>

	static int	own;
	static int	orin;

static void	pr_start(char *test)
{
	printf("*********************************************************************\n");
	printf("             Test %s                                                 \n", test);
	printf("*********************************************************************\n");

}

static void	pr_line(void)
{
	printf("---------------------------------------------------------------------\n");
}

static void	pr_ok(char *own, char *orin)
{
	if (printf("%d ", own) == printf("%d ", orin))
		printf("\n   ->       OK!       \n");
	else
		printf("\n   ->    SO BAD!      |\n");
}
/*                   Comparing original and own version                   */
void	test_cs(void)
{
	pr_start("Int -> C");
	own = ft_printf("Pepinillos\n");
	orin = printf("Pepinillos\n");
	pr_ok(own, orin);
	pr_line();
	own = ft_printf("HOL%c SOY%cAL%cX\n", 'A', ' ', 'E');
	orin = printf("HOL%c SOY%cAL%cX\n", 'A', ' ', 'E');
	pr_ok(own, orin);
	pr_start("Int -> S");
	own = ft_printf("LUCK, yo soy %s\n", "TU PADRE");
	orin = printf("LUCK, yo soy %s\n", "TU PADRE");
	pr_ok(own, orin);
}

void	test_di(void)
{
	pr_start("Int -> D");
	own = ft_printf("%d\n", 500);
	orin = printf("%d\n", 500);
	pr_ok(own, orin);
	pr_line();
	own = ft_printf("%d\n", (int)-2147483648);
	orin = printf("%d\n", (int)-2147483648);
	pr_ok(own, orin);
	pr_line();
	own = ft_printf("%d\n", 2147483647);
	orin = printf("%d\n", 2147483647);
	pr_ok(own, orin);
	pr_start("Int -> I");
	own = ft_printf("%i\n", 500);
	orin = printf("%i\n", 500);
	pr_ok(own, orin);
	pr_line();
	own = ft_printf("%i\n", 0);
	orin = printf("%i\n", 0);
	pr_ok(own, orin);

}

void	test_boux(void)
{
	pr_start("Binario -> B");
	ft_printf("%b\n", 1996);
	pr_start("Octal -> O");
	own = ft_printf("%o\n", 1996);
	orin = printf("%o\n", 1996);
	pr_ok(own, orin);
	pr_start("Unsigned int -> U");
	own = ft_printf("%u\n", 69420);
	orin = printf("%u\n", 69420);
	printf("%d %d\n", own, orin);
	pr_start("hexadecimal -> x");
	own = ft_printf("%x\n", 69420);
	orin = printf("%x\n", 69420);
	pr_ok(own, orin);
	pr_start("HEXADECIMAL -> X");
	own = ft_printf("%X\n", 69420);
	orin = printf("%X\n", 69420);
	pr_ok(own, orin);
}

void	test_p(void)
{
	pr_start("Puntero -> P");
	own = ft_printf("%p\n", &own);
	orin = printf("%p\n", &own);
	pr_ok(own, orin);
	pr_line();
	own = ft_printf("%p\n", (void *)1);
	orin = printf("%p\n", (void *)1);
	pr_ok(own, orin);
	pr_line();
	own = ft_printf("%p\n", (void *)-1);
	orin = printf("%p\n", (void *)-1);
	pr_ok(own, orin);
	pr_line();
	own = ft_printf("%p\n", (void *) NULL);
	orin = printf("%p\n", (void *) NULL);
	pr_ok(own, orin);
	pr_line();
}

int	main(void)
{
	test_cs();
	test_di();
	test_boux();
	test_p();
	return (0);
}
