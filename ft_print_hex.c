/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:01:04 by vivaccar          #+#    #+#             */
/*   Updated: 2023/11/03 15:33:11 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long n, char type)
{
	int		count;
	char	*upper;
	char	*lower;

	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_print_hex(-n, type) + 1);
	}
	else if (n < 16)
	{
		if (type == 'x')
			return (ft_putchar(lower[n]));
		else
			return (ft_putchar(upper[n]));
	}
	else 
	{
		count = ft_print_hex(n / 16, type);
		return (count + ft_print_hex(n % 16, type));
	}
}

/* int main(void)
{
	unsigned long	i;

	i = 9223372036854775807LL;
	ft_print_hex(i, 'x');
} */