/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:29:05 by ssallami          #+#    #+#             */
/*   Updated: 2024/12/01 14:42:18 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_conversions(char c, va_list list);
int	ft_hex_lowercase(unsigned int x);
int	ft_hex_uppercase(unsigned int x);
int	ft_hex_p(unsigned long x);
int	ft_putnbr_u(unsigned int nb);
int	ft_printf(const char *foramt, ...);

#endif
