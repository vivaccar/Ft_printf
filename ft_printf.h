/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:09:34 by vivaccar          #+#    #+#             */
/*   Updated: 2023/11/03 15:31:11 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	print_type(char type, va_list ap);
int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_printnumber(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned long long n, char type);
int	ft_print_ptr(void *ptr);

#endif