/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:47:18 by marvin            #+#    #+#             */
/*   Updated: 2024/04/10 14:47:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int*	ft_send_signal(char c, int PID)
{
	int*	byte;
	int		i;

	i = 7;
	while (i-- >= 0)
	{
		if (c & (1 << i) == 1)
			kill(PID, SIGUSR1);
		else
			kill(PID, SIGUSR2);
		usleep(30);
	}
	
}