/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:06:55 by iubieta-          #+#    #+#             */
/*   Updated: 2024/05/01 14:06:55 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "./libs/printf/ft_printf.h"

static int rx = 0;

void	sig_handler(int signal, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;
	//printf("rx ");
	if (signal == SIGUSR1)
		rx = 1;
}

void	ft_send_char(unsigned char c, int PID)
{
	int		i;

	i = 8;
	while (i > 0)
	{
		if (c & (1 << (i - 1)))
		{
			//printf("1 ");
			kill(PID, SIGUSR1);
		}
		else
		{
			//printf("0 ");
			kill(PID, SIGUSR2);
		}
		while (rx == 0)
			usleep(100);
		rx = 0;
		i--;
	}
	//printf("\n");
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;
	char	nl = '\n';
	struct 	sigaction sa;
  
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART | SA_SIGINFO;
	sa.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
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
	ft_send_char((unsigned char)nl, pid);
	return (0);
}
