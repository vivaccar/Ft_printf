/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:20:05 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/31 14:24:18 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	count;
	
	count = 0;
	while (*s)
	{
		ft_putchar(*s);
		s++;
		count++;
	}
	return (count);
}