/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:47:44 by dvallada          #+#    #+#             */
/*   Updated: 2025/10/25 16:49:38 by dvallada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_imp(va_list *vargs, const char *str, int *i)
{
	if (str[0] == 'c')
		ft_printf_char(va_arg(*vargs, int), i);
	else if (str[0] == 's')
		ft_printf_str(va_arg(*vargs, char *), i);
	else if (str[0] == 'p')
		ft_printf_ptr(va_arg(*vargs, void *), i);
	else if (str[0] == 'x')
		ft_printf_hex(va_arg(*vargs, unsigned int), i, 0);
	else if (str[0] == 'X')
		ft_printf_hex(va_arg(*vargs, unsigned int), i, 1);
	else if (str[0] == 'd')
		ft_putnbr_pf(va_arg(*vargs, int), i);
	else if (str[0] == 'i')
		ft_putnbr_pf(va_arg(*vargs, int), i);
	else if (str[0] == 'u')
		ft_putunbr_pf(va_arg(*vargs, unsigned int), i);
	else if (str[0] == '%')
		ft_printf_char('%', i);
}

int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!str)
		return (-1);
	va_start(vargs, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			ft_imp(&vargs, str + i, &len);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(vargs);
	return (len);
}
