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

int*	ft_send_char(char c, int PID)
{
	int		i;

	i = 7;
	while (i-- >= 0)
	{
		if (c & (1 << i))
			kill(PID, SIGUSR1);
		else
			kill(PID, SIGUSR2);
		usleep(30);
	}
}

//ft_confirmation();

void main(char *message, int PID)
{
	char *c;

	while (*message)
	{
		ft_send_char(*message,PID);
		message++;
		usleep(30);
	}
	
}