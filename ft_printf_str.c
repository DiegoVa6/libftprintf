void	ft_printf_str(va_list *vargs, int *i)
{
	int	j;
	char	*s;

	j = 0;
	s = va_arg(*vargs, char *);
	if (!s)
		return ;
	while (s[j])
	{
		write(1, &s[j], 1);
		j++;
		*i += 1;
	}
}
