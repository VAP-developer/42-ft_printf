/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalons <vicalons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:40:48 by vicalons          #+#    #+#             */
/*   Updated: 2025/01/22 12:05:27 by vicalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	c='a';
	int	l1_pr;
	int	l2;
	char	*str = NULL;
	int	nbr = 433;
	int	hex = 903;
	int	lnbr = -2147483648;
	int	unbr = 2147483647;
	unsigned int usn = -1;
	int	*ptr = NULL;

	// EXAMPLE
	l1_pr = printf("\\0", (void *)ptr);	
	printf("len: %d\n", l1_pr);	
	l2 = ft_printf("\\0", (void *)ptr);	
	printf("len: %d\n", l2);	
	/*
	// EXAMPLE SPECIAL:
	l1_pr = printf("1_PRINTF: Es %");	
	printf("len: %d\n", l1_pr);	
	l2 = ft_printf("2_PRINTF: Es %");	
	printf("len: %d\n", l2);	
	*//*	
	// EXAMPLE PTR: %p
	l1_pr = printf("1_PRINTF: Es %p un ptr:\n", (void *)ptr);	
	printf("len: %d\n", l1_pr);	
	l2 = ft_printf("2_PRINTF: Es %p un ptr:\n", (void *)ptr);	
	printf("len: %d\n", l2);	
	*//*
	// EXAMPLE UNSIGNED: %u
	l1_pr = printf("1_PRINTF: Es %u un usgn:\n", usn);	
	printf("len: %d\n", l1_pr);	
	l2 = ft_printf("2_PRINTF: Es %u un usgn:\n", usn);	
	printf("len: %d\n", l2);
	*//*
	// EXAMPLE UNSIGNED: %x%X
	l1_pr = printf("1_PRINTF: Es %x un hex:\n", hex);	
	printf("len: %d\n", l1_pr);	
	l2 = ft_printf("2_PRINTF: Es %x un hex:\n", hex);	
	printf("len: %d\n", l2);	
	*//*
	// EXAMPLE NBR: %d%i	`
	l1_pr = printf("1_PRINTF: Es %d un nbr:\n", nbr);	
	printf("len: %d\n", l1_pr);	
	l2 = ft_printf("2_PRINTF: Es %d un nbr:\n", nbr);	
	printf("len: %d\n", l2);	
	*//*
	// EXAMPLE STR: %s
	l1_pr = printf("%s", str);	
	printf("len: %d\n", l1_pr);	
	l2 = ft_printf("%s", str);	
	printf("len: %d\n", l2);	
	*//*
	// EXAMPLE NO_VA: %
	l1_pr = printf("%", c);
	printf("len: %d\n", l1_pr);
	l2 = ft_printf("%");
	char *hola = "cHola mundo!!!\n";
	printf("len: %d\n", l2);
	*//*
	// EXAMPLE CHARACTER: %c
	l1_pr = printf("1_PRINTF: Es %c un caracter:\n",c);
	printf("len: %d\n", l1_pr);
	l2 = ft_printf("2_PRINTF: Es %c un caracter:\n",c);
	printf("len: %d\n", l2);
	*/
	return (0);
}
