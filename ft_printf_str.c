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

void	ft_printf_char(char c, int *i)
{
	write(1, &c, 1);
	*i += 1;
}

void	ft_printf_str(char *s, int *i)
{
	int	j;

	j = 0;
	if (!s)
		return ;
	while (s[j])
	{
		write(1, &s[j], 1);
		j++;
		*i += 1;
	}
}

static void     putnbr_t(int n, int *i)
{
        if (n > 9)
        {
                putnbr_t(n / 10, i);
                putnbr_t(n % 10, i);
        }
        else
		ft_printf_char(c + '0', i);
}

void    ft_putnbr_pf(int n, int *i)
{
        if (n == -2147483648)
        {
                ft_printf_str("-2147483648", i);
                return ;
        }
        if (n < 0)
        {
                write(1, '-', 1);
                *i += 1;
                n *= -1;
        }
        putnbr_t(n, i);
}
