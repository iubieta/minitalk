/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:41:48 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 17:06:12 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h>
#include <string.h> */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destiny;
	unsigned const char	*source;
	size_t				i;

	destiny = dest;
	source = src;
	i = 0;
	if (destiny > source)
	{
		while (n--)
			destiny[n] = source[n];
	}
	else if (destiny < source)
	{
		while (i < n)
		{
			destiny[i] = source[i];
			i++;
		}
	}
	return (dest);
}

/* int main(void)
{
	char str1[50] = "Esta es la funcion memmove";
	char dest1[50] = "AAAAAAAAAAAAAAAAAAA";
	char str2[50] = "Esta es la funcion memmove";
	char dest2[50] = "BBBBBBBBBBBBBBBBBBB";
	
	char *result;

	result = ft_memmove(str1, str1+7, 11);
	printf("%s\n", result);
	printf("%s\n", memmove(str2, str2+7, 11));
	return (0);
} */
