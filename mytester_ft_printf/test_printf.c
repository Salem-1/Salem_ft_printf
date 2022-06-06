/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:20:02 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/06 15:50:27 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	// unsigned long long t = 4294967295; //t < 1000; t++)
	// printf("%d\n", printf("%p\n", LONG_MAX));
	// printf("%d\n",ft_printf("%p\n", LONG_MAX ));
	printf("%d\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 
		'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
//	printf("%d\n",   printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 
		//'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	
	//ft_printf("\n");
	//ft_printf("%s");
	 
	//printf("%%%s");
	//ft_printf("%%%");
	// //printf("this is the original printg%d %d ^=%d %d 	\n", 1, 2, 3);
	// printf("len %d\n", ft_printf("Bism Ellah Elra7man Elra7eem, testing the normal printf\n"));
	// printf("len %d\n", ft_printf("TESTING THE digit <%d>\n", t));
	
	
	// printf("len %d\n", ft_printf("TESTING THE digit <%i>\n", 0134));
	
	// printf("len %d\n", ft_printf("TESTING THE CHAR <%c>\n", 'x'));
	// printf("len %d\n", ft_printf("TESTING THE percent <%%>\n"));

}