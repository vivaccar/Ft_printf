/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:20:05 by vivaccar          #+#    #+#             */
/*   Updated: 2023/11/02 17:19:02 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (*s)
	{
		ft_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
