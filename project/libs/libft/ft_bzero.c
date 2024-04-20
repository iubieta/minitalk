/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:08:02 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 16:53:54 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h>
#include <string.h> */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/* int main()
{
	char str[50] = "Esta es la funcion bzero";


	printf("String original:  %s\n", str);
	bzero(str, 2);
	write(1, "Función original: ", 20);
	write(1, &str, 30);
	write(1, "\n", 1);

	char str1[50] = "Esta es la funcion bzero";

	ft_bzero(str1, 2);
	write(1, "Función propia:   ", 20);
	write(1, &str1, 30);
	write(1, "\n", 1);
	return(0);
} */