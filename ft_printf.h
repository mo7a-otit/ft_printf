/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:54:46 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/11 20:15:09 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_hexa(unsigned int n, int base);
int	count(unsigned int n);
int	ft_adresse(unsigned long n);
int	ft_unputnbr(unsigned int n);
int	ft_len(long nb);
int	ft_printf(const char *str, ...);

#endif
