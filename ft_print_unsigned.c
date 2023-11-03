/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:29:54 by vivaccar          #+#    #+#             */
/*   Updated: 2023/11/02 18:06:22 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	un_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*itoa_un(unsigned int n)
{
	char	*nbr;
	int		len;

	len = un_len(n);
	nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (0);
	nbr[len] = '\0';
	if (n == 0)
		nbr[0] = '0';
	while (n != 0)
	{
		nbr[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (nbr);
}

int	ft_print_unsigned(unsigned int n)
{
	int		count;
	char	*number;

	count = un_len(n);
	number = itoa_un(n);
	ft_putstr(number);
	free(number);
	return (count);
}

/* int	main(void)
{
	unsigned int	i;
	i = 0;
	ft_print_unsigned(i);
} */
