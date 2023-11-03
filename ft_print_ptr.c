/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:55:08 by vivaccar          #+#    #+#             */
/*   Updated: 2023/11/03 15:31:46 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int					count;
	unsigned long long	n;

	if (!ptr)
		return (write (1, "(nil)", 5));
	count = 0;
	n = (unsigned long long)ptr;
	count += write(1, "0x", 2);
	count += ft_print_hex(n, 'x');
	return (count);
}

/* #include <stdio.h>
int	main(void)
{
	char	*ptr;
	ptr = "ola";
	ft_print_ptr(0);
	printf("\n%p", (void *)0);
} */