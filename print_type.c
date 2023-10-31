/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:52:49 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/31 14:33:56 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_type(char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count = ft_putchar(va_arg(ap, int));
	if (type == 's')
		count = ft_putstr(va_arg(ap, char *));
	if ()
	return (count);
}