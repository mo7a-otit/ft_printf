/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:13:36 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/11 20:15:23 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_hexa(unsigned int n, int base)
{
	if (n > 15 && (base == 'x' || base == 'X'))
	{
		ft_hexa(n / 16, base);
		ft_hexa(n % 16, base);
	}
	else
	{
		if (base == 'x')
			ft_putchar("0123456789abcdef"[n % 16]);
		if (base == 'X')
			ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (count (n));
}
