/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:08:33 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/11 20:16:04 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(const char *str, va_list args, int i, int count)
{
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				count += ft_putchar (va_arg (args, int));
			else if (str[i] == 's')
				count += ft_putstr (va_arg (args, char *));
			else if (str[i] == 'p')
				count += ft_adresse (va_arg (args, unsigned long));
			else if ((str[i] == 'd') || (str[i] == 'i'))
				count += ft_putnbr (va_arg (args, int));
			else if (str[i] == 'x' || str[i] == 'X')
				count += ft_hexa (va_arg (args, unsigned int), str[i]);
			else if (str[i] == 'u')
				count += ft_unputnbr (va_arg (args, unsigned int));
			else
				count += ft_putchar (str[i]);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	va_start (args, str);
	i = ft_check(str, args, 0, 0);
	va_end (args);
	return (i);
}
