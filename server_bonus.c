/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:39:08 by iubieta-          #+#    #+#             */
/*   Updated: 2024/05/01 14:02:46 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <signal.h>

void	ft_signal(int signal, siginfo_t *info, void *context)
{
	static int				i = 0;
	static unsigned char	byte = 0;

	(void)context;
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
	if (signal == SIGUSR1)
		kill(info->si_pid, SIGUSR1);
	else if (signal == SIGUSR2)
		kill(info->si_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	signal;

	signal.sa_sigaction = &ft_signal;
	signal.sa_flags = SA_SIGINFO;
	sigemptyset(&signal.sa_mask);
	ft_printf("PID: %i\n", getpid());
	sigaction(SIGUSR1, &signal, NULL);
	sigaction(SIGUSR2, &signal, NULL);
	while (1)
		pause();
	return (0);
}
