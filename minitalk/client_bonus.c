/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:06:55 by iubieta-          #+#    #+#             */
/*   Updated: 2024/05/23 19:18:02 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "./libs/printf/ft_printf.h"

static int	g_rx = 0;

void	sig_handler(int signal, siginfo_t *info, void *context)
{
	static int	i = 0;

	(void)info;
	(void)context;
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
	g_rx = 1;
}

void	ft_send_char(unsigned char c, int PID)
{
	int		i;

	i = 8;
	while (i > 0)
	{
		if (c & (1 << (i - 1)))
		{
			kill(PID, SIGUSR1);
		}
		else
		{
			kill(PID, SIGUSR2);
		}
		while (g_rx == 0)
			usleep(100);
		g_rx = 0;
		i--;
	}
}

void	ft_send_message(char *message, int pid)
{
	char	nl;

	nl = '\n';
	while (*message)
	{
		ft_send_char((unsigned char)*message, pid);
		message++;
	}
	ft_send_char((unsigned char)nl, pid);
}

int	main(int argc, char **argv)
{
	int					pid;
	char				*message;
	struct sigaction	sa;

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
	ft_send_message(message, pid);
	return (0);
}
