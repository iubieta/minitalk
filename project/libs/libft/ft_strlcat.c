/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:45:40 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/20 15:10:04 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= destsize || destsize == 0)
		return (destsize + src_len);
	while (dest_len + i < destsize - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* int	main()
{
	char	str[100] = "lorem ipsum dolor sit amet";
	char	dest1[50] = "";
	char	dest2[50] = "";

	printf("%lu\n",strlcat(dest1,str,0));
	printf("%s\n",dest1);
	
	printf("%lu\n",ft_strlcat(dest2,str,0));
	printf("%s\n",dest2);
} */