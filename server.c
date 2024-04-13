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

int	ft_rx_signal(int signal)
{
	if (signal == SIGUSR1)
		*rx_bit = 1;
	else if (signal == SIGUSR2)
		*rx_bit = 0;
}

char	ft_byte_to_char(int byte[8])
{
	
}

void	ft_server_loop(int byte[8], int i)
{
	int			i;
	int			byte[8];
		
	i = 0;
	byte = {-1};
	while (1)
	{
		if (rx_bit != -1)
		{
			byte[i] = rx_bit;
			rx_bit = -1;
			if (i == 8)
			{
				c = ft_byte_to_char(byte);
				write(1,&c,1);
				i = 0;
				byte = {-1};
			}
			else
				i++;
		}
	}
}

int main()
{
	static int	rx_bit;

	rx_bit = -1;
	ft_printf("PID: %i", getpid());
	if (signal(SIGUSR1, ft_rx_signal) == SIG_ERR) 
	{
		ft_printf("Error de señal");
		return 1;
	}
	else
		printf("S: rx = %i", rx_bit);
	if (signal(SIGUSR2, ft_rx_signal) == SIG_ERR) 
	{
		ft_printf("Error de señal");
		return 1;
	}
	else
		printf("S: rx = %i", rx_bit);
	
	ft_server_loop();
}