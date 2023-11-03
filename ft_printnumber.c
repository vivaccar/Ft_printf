/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:35:59 by vivaccar          #+#    #+#             */
/*   Updated: 2023/11/02 17:20:21 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnumber(int n)
{
	char	*nbr;
	int		size;

	size = 0;
	nbr = ft_itoa(n);
	size = ft_strlen(nbr);
	ft_putstr(nbr);
	free(nbr);
	return (size);
}
