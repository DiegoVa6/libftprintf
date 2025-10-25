/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:48:56 by dvallada          #+#    #+#             */
/*   Updated: 2025/10/24 19:55:57 by dvallada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_char(char c, int *i)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_printf_str(char *s, int *i)
{
	int	j;

	j = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		(*i) += 6;
		return ;
	}
	while (s[j])
	{
		write(1, &s[j], 1);
		j++;
		(*i)++;
	}
}

static void	putnbr_rec(unsigned int n, int *i)
{
	if (n > 9)
		putnbr_rec(n / 10, i);
	ft_printf_char((char)('0' + (n % 10)), i);
}

void	ft_putnbr_pf(int n, int *i)
{
	if (n < 0)
	{
		ft_printf_char('-', i);
		putnbr_rec((unsigned int)(-(long)n), i);
	}
	else
		putnbr_rec((unsigned int)n, i);
}

void	ft_putunbr_pf(unsigned int n, int *i)
{
	putnbr_rec(n, i);
}
