/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:54:13 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/11 20:19:33 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned long n)
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

static int	ft_hexa_p(unsigned long n)
{
	if (n > 15)
	{
		ft_hexa_p(n / 16);
		ft_hexa_p(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n % 16]);
	return (count(n));
}

int	ft_adresse(unsigned long n)
{
	ft_putstr("0x");
	ft_hexa_p(n);
	return (ft_count (n) + 2);
}
