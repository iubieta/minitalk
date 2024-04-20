/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:05:08 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 17:13:33 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

/* int main(void)
{
  char    *str =  "hola";
  printf("Función original: %lu\n", strlen(str));
  printf("Función propia:   %lu\n", ft_strlen(str));
} */