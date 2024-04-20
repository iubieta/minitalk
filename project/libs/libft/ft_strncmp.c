/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:48:11 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/18 18:48:11 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char)s1[i] != '\0'
			|| (unsigned char)s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* int	main()
{
	char str2[50] = "String de prueba";
	char str1[50] = "String de comparacion";
	size_t	n = 0;

	printf("%i\n", strncmp(str1,str2,n));
	printf("%i\n", ft_strncmp(str1,str2,n));
} */