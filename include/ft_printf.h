/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:46:49 by dvallada          #+#    #+#             */
/*   Updated: 2025/10/25 15:49:57 by dvallada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	ft_printf_hex(unsigned int n, int *i, int upper);
void	ft_printf_ptr(void *ptr, int *i);
void	ft_printf_char(char c, int *i);
void	ft_printf_str(char *s, int *i);
void	ft_putnbr_pf(int n, int *i);
void	ft_putunbr_pf(unsigned int n, int *i);

#endif
