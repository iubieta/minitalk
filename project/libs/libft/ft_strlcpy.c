/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:05:21 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/27 19:49:37 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (destsize > 0 && dest != NULL)
	{
		while (src[j] != '\0' && j < destsize - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/* int	main()
{
	char	str[100] = "aaa";
	char	dest1[50];
	char	dest2[50];

	printf("%lu\n",strlcpy(dest1,str,2));
	printf("%s\n",dest1);
	
	printf("%lu\n",ft_strlcpy(dest2,str,2));
	printf("%s\n",dest2);
} */