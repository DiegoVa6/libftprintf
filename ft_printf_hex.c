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

void	ft_dechex(unsigned int p, char *base, int len)
{
	int	i;
	int	j;

	if (p != 0)
	{
		i = p / 16;
		j = p % 16;
		ft_dechex(i, base);
		write(1, &base[j], 1);
		(*len) += 1;
	}

}

void	ft_printf_hp(void *value, int *i)
{
	unsigned long	*p;
	char	*base;

	p = (unsigned long) value;
	if (!p)
		return ;
	write(1, "0x", 2);
	(*i) += 2;
	if (p == 0)
        {
                write(1, "0", 1);
                (*i) += 1;
                return ;
        }
	base = "0123456789abcdef";
	ft_dechex(p, base, i);
}

void	ft_printf_hex(unsigned int p, int *i, int m)
{
	char	*base;

	if (p == 0)
	{
		write(1, "0", 1);
		(*i) += 1;
		return ;
	}
	if (m == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	ft_dechex(p, base, i);
}
