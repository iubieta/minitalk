/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:25:43 by iubieta-          #+#    #+#             */
/*   Updated: 2023/11/02 16:20:38 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printarg(char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		len += ft_putstr("0x");
		len += ft_puthex(va_arg(args, unsigned long), 0);
	}
	else if (format == 'x')
		len += ft_puthex(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		len += ft_puthex(va_arg(args, unsigned int), 1);
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_putnbr(va_arg(args, unsigned));
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *main_str, ...)
{
	va_list	args;
	int		len;

	va_start(args, main_str);
	len = 0;
	while (*main_str)
	{
		if (*main_str == '%')
		{
			main_str++;
			len += ft_printarg(*main_str, args);
		}
		else
			len += ft_putchar(*main_str);
		main_str++;
	}
	va_end(args);
	return (len);
}
