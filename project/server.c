/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:49:16 by marvin            #+#    #+#             */
/*   Updated: 2024/04/13 10:49:16 by marvin           ###   ########.fr       */
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

/* 	if (signal == SIGUSR1)
		printf("1");
	else if (signal == SIGUSR2)
		printf("0"); */
	byte |= (signal == SIGUSR1);
	i++;
	if (i == 8)
	{
		//printf("\n");
		ft_printf("%c", byte);
		i = 0;
		byte = 0;
	}
	else
		byte <<= 1;
}

int main()
{
	ft_printf("PID: %i\n", getpid());
	signal(SIGUSR1, ft_signal);
	signal(SIGUSR2, ft_signal);
	while (1)
		pause();
	return (0);
}