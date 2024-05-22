/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:06:55 by iubieta-          #+#    #+#             */
/*   Updated: 2024/05/06 20:31:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "./libs/printf/ft_printf.h"

static int rx = 0;

void	ft_send_char(unsigned char c, int PID)
{
	int		i;

	i = 8;
	while (i > 0)
	{
		if (c & (1 << (i - 1)))
			kill(PID, SIGUSR1);
		else
			kill(PID, SIGUSR2);
		i--;
		//while (!rx)
			usleep(100);
	}
}

void	ft_confirmation(int signal)
{
	static int	i = 0;

	if (signal == SIGUSR1)
		ft_printf("1");
	else if (signal == SIGUSR2)
		ft_printf("0");
	i++;
	if (i == 8)
	{
		ft_printf(" ");
		i = 0;
	}
	rx = 1;
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;

	signal(SIGUSR1, ft_confirmation);
	signal(SIGUSR2, ft_confirmation);
	if (argc != 3)
	{
		ft_printf("ERROR: Usage: %s <PID> <Message>\n", argv[0]);
		return (1);
	}
	pid = atoi(argv[1]);
	message = argv[2];
	ft_printf("PID: %i\n", pid);
	ft_printf("Message: %s\n", message);
	while (*message)
	{
		ft_send_char((unsigned char)*message, pid);
		message++;
	}
	return (0);
}
