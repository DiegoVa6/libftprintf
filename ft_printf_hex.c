/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:49:20 by dvallada          #+#    #+#             */
/*   Updated: 2025/10/24 19:04:30 by dvallada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	puthex_rec(unsigned int n, char const *base, int *i)
{
	if (n >= 16)
		puthex_rec(n / 16, base, i);
	ft_printf_char(base[n % 16], i);
}

static void	puthex_ul(unsigned long n, char const *base, int *i)
{
	if (n >= 16)
		puthex_ul(n / 16, base, i);
	ft_printf_char(base[n % 16], i);
}

void	ft_printf_hex(unsigned int n, int *i, int upper)
{
	char const	*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n == 0)
	{
		ft_printf_char('0', i);
		return ;
	}
	puthex_rec(n, base, i);
}

void	ft_printf_ptr(void *ptr, int *i)
{
	unsigned long	v;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		(*i) += 5;
		return ;
	}
	v = (unsigned long)ptr;
	write(1, "0x", 2);
	(*i) += 2;
	puthex_ul(v, "0123456789abcdef", i);
}
