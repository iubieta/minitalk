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

void	sig_handler(int signal, siginfo_t *info, void *context)
{
	static int				client;
	static int				i = 0;
	static unsigned char	byte = 0;

	(void)context;
	client = info->si_pid;
	//printf("%i\n",client);
	byte |= (signal == SIGUSR1);
	i++;
	//printf("%i ",i);
	if (i == 8)
	{
		ft_printf("%c", byte);
		if (byte == '\0')
			client = 0;
		i = 0;
		byte = 0;
	}
	else
		byte <<= 1;
	kill(client, SIGUSR1);
}

int	main(void)
{
	struct 	sigaction sa;
  
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART | SA_SIGINFO;
	sa.sa_sigaction = &sig_handler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("PID: %i\n", getpid());
	while (1)
		pause();
	return (0);
}
