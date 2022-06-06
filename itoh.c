/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoh.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 07:53:14 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/06 09:22:51 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static unsigned long	num_order(unsigned long n);
static unsigned long	sixteen_pow(unsigned long c);
static char	*specials();
static char	*str_result(unsigned long pow, char *result, unsigned long n, int flag);

char	*ft_itoh(unsigned long n, int flag)
{
	unsigned long		i;
	char	*result;
	unsigned long		temp;
	unsigned long		pow;

	temp = 1;
	i = 0;
	if (n == 0)
		return (specials());
	if (flag == 2)
		result = malloc(sizeof(char) * (num_order(n) + 3));
	else
		result = malloc(sizeof(char) * (num_order(n) + 1));
	if (result == NULL)
		return (NULL);	
	i = 0;
	pow = sixteen_pow(num_order(n));
	if (flag == 0)
		return (str_result(pow,  result, n, 0));
	else if (flag == 1)
		return (str_result(pow, result, n, 1));
	else
		return (str_result(pow, result, n, 2));
	return (0);
}

static char	*str_result(unsigned long pow, char *result, unsigned long n, int flag)
{
	unsigned long i;
	if(flag == 2)
	{
		result[0] = '0';
		result[1] = 'x';
		i = 2;
		flag = 0;
	}
	else 
		i = 0;
	while (pow > 0)
	{
		result[i] = n / pow % 16;
		//printf("the digit to be added is %d\n", result[i]);
		if (result[i] < 10)
		{
			result[i] += '0';
		}
		else if(flag == 0)
		{	
			result[i] += 87;
		}else
		{
			result[i] += 55;
		}
		//printf("after conditions %d\n", result[i]);
		pow /= 16;
		i++;
	}
	result[i] = '\0';
	return (result);
}

static unsigned long	num_order(unsigned long n)
{
	unsigned long	i;

	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static unsigned long	sixteen_pow(unsigned long c)
{
	unsigned long	i;
	unsigned long	result;

	i = 0;
	result = 1;
	while (i < (c - 1))
	{
		result *= 16;
		i++;
	}
	return (result);
}

static char	*specials()
{
	char	*result;
	result = (char *)malloc(sizeof(char ) * 2);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}
