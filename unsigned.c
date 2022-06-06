/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:55:01 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/05 21:01:32 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

static unsigned int	num_order(unsigned int n);
static unsigned int	ten_pow(unsigned int c);
static char	*specials();
static char	*str_result(unsigned int pow, unsigned int i, char *result, unsigned int n);

char	*ft_unsigned_itoa(unsigned int n)
{
	unsigned  int		i;
	char	*result;
	unsigned int		temp;
	unsigned int		pow;

	temp = 1;
	i = 0;
	if (n == 0)
		return (specials());
	result = malloc(sizeof(char) * (num_order(n) + 1));
	if (result == NULL)
		return (NULL);
	else
		i = 0;
	pow = ten_pow(num_order(n));
	return (str_result(pow, i, result, n));
}

static char	*str_result(unsigned int pow, unsigned int i, char *result, unsigned int n)
{
	while (pow > 0)
	{
		result[i] = n / pow % 10 + '0';
		pow /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}

static unsigned int	num_order(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static unsigned int	ten_pow(unsigned int c)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 1;
	while (i < (c - 1))
	{
		result *= 10;
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
