
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_dechex(unsigned int p, char *base)
{
        int     i;
        int     j;

        if (p != 0)
        {
                i = p / 16;
                j = p % 16;
                ft_dechex(i, base);
                write(1, &base[j], 1);
        }

}

void    ft_printf_hex(int p)
{
	char	*base;

        write(1, "0x", 2);
	if (p == 0)
	{
		write(1, "0", 1);
		return ;
	}
        base = "0123456789abcdef";
        ft_dechex(p, base);
}


int	main(void) 
{
	int	a;
	int	*p;

	a = 0;
	p = &a;
	ft_printf_hex(a);
	printf("El valor de x: %d", 623);
}
