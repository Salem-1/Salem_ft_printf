/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:13:36 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/06 16:26:24 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(const char *s);

static int	print_percent(void)
{
	int	a;

	a = '%';
	write(1, &a, 1);
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '%')
				len += (print_percent());
			else
				len += param_checker(&s[i], va_arg(ptr, void *));
		}
		else
			len += ft_putchar(&s[i]);
		if (!s[i + 1])
			break ;
		i++;
	}
	va_end(ptr);
	return (len);
}

static int	ft_putchar(const char *s)
{
	write(1, s, 1);
	return (1);
}
