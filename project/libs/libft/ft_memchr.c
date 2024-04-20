/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:47:56 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/18 18:47:56 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	byte = (unsigned char)c;
	while (i < n && (unsigned char)ptr[i] != byte)
		i++;
	if (i == n)
		return (0);
	else
		return (&ptr[i]);
}

/* int	main()
{
	char	str[50] = "hello world the pointer should be at this point";
	int		byte = 'a';
	size_t	n = 50;

	printf("%s\n", (char *)memchr(str, byte, n));
	printf("%s\n", (char *)ft_memchr(str, byte, n));
} */