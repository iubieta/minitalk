/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:15:38 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/21 18:46:20 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h> */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;

	s_copy = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!s_copy)
		return (0);
	s_copy = ft_memcpy(s_copy, s, ft_strlen(s));
	return (s_copy);
}

/* int main()
{
	char s[50] = "Hola que tal";

	printf("%s\n",strdup(s));
	printf("%s\n",ft_strdup(s));
} */