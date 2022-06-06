/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:20:02 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/06 09:21:52 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"
#include <stdio.h>

int main()
{
	unsigned long t = 352434; //t < 1000; t++)
	
	 ft_printf("%p \n", &t);
	 printf("%p\n", &t);
	
	// //printf("this is the original printg%d %d ^=%d %d 	\n", 1, 2, 3);
	// printf("len %d\n", ft_printf("Bism Ellah Elra7man Elra7eem, testing the normal printf\n"));
	// printf("len %d\n", ft_printf("TESTING THE digit <%d>\n", t));
	
	
	// printf("len %d\n", ft_printf("TESTING THE digit <%i>\n", 0134));
	
	// printf("len %d\n", ft_printf("TESTING THE CHAR <%c>\n", 'x'));
	// printf("len %d\n", ft_printf("TESTING THE percent <%%>\n"));

}