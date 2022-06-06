/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:53:17 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/06 09:18:43 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	print_percent();
static int	print_char(char c);
static int print_string(char * arg);

int param_checker(const char *s, void *arg)
{
	if (*s == '%')
		return (print_percent());
	else if (*s == 'c')
		return (print_char((char)arg));
	else if (*s == 'i')
		return (print_int((int)arg));
	else if (*s == 'd')
		return (print_digit((signed int)arg));
	else if (*s == 's')
		return(print_string((char *)arg));
	else if (*s == 'u')
		return (print_unsigned((unsigned int)arg));
	else if (*s == 'x')
		return (print_hex((unsigned long)arg, 0));
	else if (*s == 'X')
		return (print_hex((unsigned long)arg, 1));
	else if (*s == 'p')
		return (print_hex((unsigned long long)arg, 2));
	return (0);
}

static int print_string(char * arg)
{
	ft_putstr(arg);
	return((int)ft_strlen(arg));
}

static int	print_percent()
{
	write(1, "%", 1);
	return (1);
}

static int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}