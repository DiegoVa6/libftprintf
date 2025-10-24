#include <stdarg.h>
#include "libft.h"

int	ft_imp(va_list *vargs, const char *str, int *i)
{
	if (str[0] == 'c')
		ft_printf_char(vargs, i);
	else if (str[0] == 's')
		ft_printf_str(vargs, i);
	else if (str[0] == 'p')
		ft_printf_hex(vargs, i);
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
}*/
