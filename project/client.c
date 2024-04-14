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

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void	ft_send_char(char c, int PID)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (c & (1 << i))
			kill(PID, SIGUSR1);
		else
			kill(PID, SIGUSR2);
		usleep(100);
		i++;
	}
}

//ft_confirmation();

int main(int argc, char *argv[]) 
{
    if (argc != 3)
	{
        printf("ERROR: Usage: %s <PID> <Message>\n", argv[0]);
        return 1;
    }

    int PID = atoi(argv[1]);
	printf("PID: %i\n", PID);
    unsigned char *message = argv[2];
	printf("Message: %s\n", message);

    while (*message)
	{
        ft_send_char(*message, PID);
        message++;
    }
	ft_send_char(*"\n",PID);

    return (0);
}