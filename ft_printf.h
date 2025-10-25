#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int     ft_printf(char const *str, ...);
void    ft_printf_hex(unsigned int n, int *i, int upper);
void    ft_printf_ptr(void *ptr, int *i);
void    ft_printf_char(char c, int *i);
void    ft_printf_str(char *s, int *i);
void    ft_putnbr_pf(int n, int *i);
void    ft_putunbr_pf(unsigned int n, int *i);

#endif
