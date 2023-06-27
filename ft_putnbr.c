/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:18:46 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/11 02:48:52 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	a;

	a = n;
	if (a < 0)
	{
		ft_putchar ('-');
		a = a * -1;
	}
	if (a > 9)
	{
		ft_putnbr (a / 10);
		ft_putchar (a % 10 + '0');
	}
	else
		ft_putchar (a + '0');
	return (ft_len (n));
}
