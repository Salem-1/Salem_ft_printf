/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorophic_itoa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:15:55 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/06 08:11:47 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	num_order(int n);

int print_hex(unsigned long n, int flag)
{
	char *result;
	result = ft_itoh(n, flag);
	ft_putstr(result);
	free(result);
	return(num_order(n));
}

int print_unsigned(unsigned int n)
{
	char *result;
	result = ft_unsigned_itoa(n);
	ft_putstr(result);
	free(result);
	return(num_order(n));
}
int print_int(int n)
{
	char *result;
	
	result = ft_itoa(n);
	ft_putstr(result);
	free(result);
	return(num_order(n));	
}

int print_digit(signed int n)
{
	char *result;
	
	result = ft_signed_itoa(n);
	ft_putstr(result);
	free(result);
	return(num_order(n));	
}

/*return the length of the integer or digit*/
int	num_order(int n)
{
	int	i;

	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	else
		i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
