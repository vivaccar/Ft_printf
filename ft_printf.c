/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:32:55 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/31 14:30:10 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;
	
	va_start(ap, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{	
			s++;
			count += print_type(*s, ap);
		}
		else
			count += write(1, s, 1);
		s++;
	}
	return (count);
}
#include <stdio.h>

int	main(void)
{
	char	*c = "vinicius";
	int		i;
	i = ft_printf("Ola %s", c);
	printf("%d", i);
}