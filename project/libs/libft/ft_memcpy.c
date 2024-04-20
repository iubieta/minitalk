/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:30:46 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/27 19:42:42 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destiny;
	unsigned const char	*source;
	size_t				i;

	i = 0;
	destiny = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n && destiny != source)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dest);
}

/* int main(void)
{
   char src[50] = "mahmudulhasanjony";
   char dest[50];
   char dest1[50];


   memcpy(dest, NULL, 25);
   printf("Funcion original: %s\n", dest);
   ft_memcpy(dest1, NULL, 25);
   printf("Funcion propia:   %s\n", dest1);
   return (0);
} */
