void	ft_printf_hex(va_list *vargs, int *i)
{
	void			*p;
	unsigned long long	v;

	p = va_arg(*vargs, void *);
	if (!p)
		return ;
	write(1, "0x", 2);
	(*len) += 2;
	v = 
}
