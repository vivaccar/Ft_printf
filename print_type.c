/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:52:49 by vivaccar          #+#    #+#             */
/*   Updated: 2023/11/03 15:13:37 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_type(char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (type == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (type == 'p')
		count += ft_print_ptr(va_arg(ap, void *));
	else if (type == 'd' || type == 'i')
		count += ft_printnumber(va_arg(ap, int));
	else if (type == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (type == 'x' || type == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), type);
	else if (type == '%')
		count += ft_putchar('%');
	return (count);
}
