void	ft_printf_char(va_list *vargs, int *i)
{
	char	c;

	c = va_arg(*vargs, int);
	write(1, &c, 1);
	*i += 1;
}
