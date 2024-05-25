/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_fts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:27 by iubieta-          #+#    #+#             */
/*   Updated: 2023/11/02 16:21:01 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		len += write(1, "(null)", 6);
	else
		while (*s)
			len += write(1, s++, 1);
	return (len);
}

int	ft_putnbr(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += ft_putchar('0');
	else if (n < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(n * (-1));
	}
	else if (n < 10)
		len += ft_putchar(n + '0');
	else
	{
		len += ft_putnbr(n / 10);
		len += ft_putchar(n % 10 + '0');
	}
	return (len);
}

int	ft_puthex(unsigned long n, char mayus)
{
	char	*h_digits;
	int		i;
	int		len;

	len = 0;
	if (mayus == 0)
		h_digits = "0123456789abcdef";
	else if (mayus == 1)
		h_digits = "0123456789ABCDEF";
	else
		return (0);
	if (n < 16)
	{
		i = n % 16;
		len += ft_putchar(h_digits[i]);
	}
	else
	{
		len += ft_puthex(n / 16, mayus);
		i = n % 16;
		len += ft_putchar(h_digits[i]);
	}
	return (len);
}
