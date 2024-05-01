/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:07:19 by iubieta-          #+#    #+#             */
/*   Updated: 2024/05/01 14:07:19 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include "./libs/printf/ft_printf.h"

void	ft_signal(int signal)
{
	static int				i = 0;
	static unsigned char	byte = 0;

	byte |= (signal == SIGUSR1);
	i++;
	if (i == 8)
	{
		ft_printf("%c", byte);
		i = 0;
		byte = 0;
	}
	else
		byte <<= 1;
}

int	main(void)
{
	ft_printf("PID: %i\n", getpid());
	signal(SIGUSR1, ft_signal);
	signal(SIGUSR2, ft_signal);
	while (1)
		pause();
	return (0);
}
