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

int	rx_bit;

void	ft_rx_signal(int signal)
{
	if (signal == SIGUSR1)
		rx_bit = 1;
	else if (signal == SIGUSR2)
		rx_bit = 0;
}

void	ft_wait_for_char()
{
	int				i;
	unsigned char	c;
		
	i = 0;
	c = 0;
	while (1)
	{
		if (rx_bit != -1)
		{
			c = c | (rx_bit << i);
			//printf("%i:%i\n",i,rx_bit);
			rx_bit = -1;
			i++;
			if (i == 8)
			{
				printf("%c",c);
				i = 0;
				c = 0;
			}
		}
	}
}

int main()
{
	rx_bit = -1;
	//setbuf(stdout, NULL);
	printf("PID: %i\n", getpid());
	if (signal(SIGUSR1, ft_rx_signal) == SIG_ERR) 
	{
		printf("Error de señal\n");
		return 1;
	}
	if (signal(SIGUSR2, ft_rx_signal) == SIG_ERR) 
	{
		printf("Error de señal\n");
		return 1;
	}
	ft_wait_for_char();
}