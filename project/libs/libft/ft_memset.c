/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:31:39 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/20 18:05:10 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/* int main()
{
	char str[50] = "Esta es una funcion muy bonica";

	printf("String original: %s\n", str);
	memset(str + 5,'$', 4);
	printf("Función original: %s\n", str);


	char str1[50] = "Esta es una funcion muy bonica";
  
	ft_memset(str1 + 5,'$', 4);
	printf("Función propia: %s\n", str1);
	return(0);
} */