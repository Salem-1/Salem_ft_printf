/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:17:52 by ahsalem           #+#    #+#             */
/*   Updated: 2022/06/06 09:17:34 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h> //delete before submission

int		ft_printf(const char *, ...);
int		param_checker(const char *s, void *arg);
int		print_int(int n);
int		print_digit(signed int n);
int		print_unsigned(unsigned int n);
char	*ft_unsigned_itoa(unsigned int n);
char	*ft_signed_itoa(signed int n);
char	*ft_itoh(unsigned long n, int flag);
int		print_hex(unsigned long n, int flag);
#endif