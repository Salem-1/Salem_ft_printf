/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:13:36 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/05 20:31:00 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
	int result;
	result = 1;	
	va_list ptr;
	int	i;
	int	len;
	
	i = 0;
	len = 0;
    va_start( ptr, s);
	while(s[i])
	{
		if (s[i] == '%')
		{
			len += param_checker(&s[i + 1], va_arg(ptr, void *));
			if (s[i + 1])
				i++;
		}
		else
		{
			write(1, &s[i], 1);
			len++;
		}
		i++;
	}
	va_end(ptr);
	return (len);
}
