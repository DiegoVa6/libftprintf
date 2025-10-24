/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:47:44 by dvallada          #+#    #+#             */
/*   Updated: 2025/10/24 19:55:55 by dvallada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <stdarg.h>
#include "libft.h"

int	ft_imp(va_list *vargs, const char *str, int *i)
{
	if (str[0] == 'c')
		ft_printf_char(va_arg(*vargs, int), i);
	else if (str[0] == 's')
		ft_printf_str(va_arg(vargs, char *), i);
	else if (str[0] == 'p')
		ft_printf_hp(va_arg(*vargs, void *), i);
	else if (str[0] == 'x')
		ft_printf_hex(va_arg(*vargs, unsigned int), i, 0);
	else if (str[0] == 'X')
		ft_printf_hex(va_arg(*vargs, unsigned int), i, 1);
	else if (str[0] == 'd')
		ft_putnbr_pf(va_arg(*vargs, int));
	else if (str[0] == 'i')
		ft_printf;
	else if (str[0] == 'u')
		ft_printf;
	else if (str[0] == '%')
		ft_printf;
}

int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!str)
		return 0;
	va_start(vargs, str);
	while (str[i])
	{
		if (str[i] == '%')
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

/*
int main(void)
{
	char	c = 'A';
	char *s  = "Ruben";
	int	num = 12345;
	int dec = 98765;
	int neg = -43;
	int	hexa = 255;

	ft_printf("Mi printf: %c\n", c);
	printf("Verdadero printf: %c\n\n", c);

	ft_printf("%s\n", s);
	printf("%s\n\n", s);

	ft_printf("Mi printf: %p\n", &c);
	printf("Verdadero printf: %p\n\n", &c);

	ft_printf("Mi printf: %i\n", num);
	printf("Verdadero printf: %i\n\n", num);

	ft_printf("Mi printf: %d\n", dec);
	printf("Verdadero printf: %d\n\n", dec);

	ft_printf("Mi printf: %u\n", neg);
	printf("Verdadero printf: %u\n\n", neg);

	ft_printf("Mi printf: %x\n", hexa);
	printf("Verdadero printf: %x\n\n", hexa);

	ft_printf("Mi printf: %X\n", hexa);
	printf("Verdadero printf: %X\n\n", hexa);

	ft_printf("Mi printf: %%\n");
	printf("Verdadero printf: %%\n");
	ft_printf("\001\002\007\v\010\f\r\n");
	return (0);
	size += ft_print_hexadecimal(va_arg(argument, unsigned int), word);
}*/
