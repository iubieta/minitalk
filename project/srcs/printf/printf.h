/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:15:49 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/30 19:09:28 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// #include "libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

void	ft_printf(const char *main_str, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(long n);
void	ft_puthex(unsigned long n, char format);

#endif