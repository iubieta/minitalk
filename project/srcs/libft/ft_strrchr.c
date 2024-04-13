/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:21:32 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/20 14:53:59 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*ptr;

	ch = (char)c;
	ptr = (char *)s;
	while (*ptr != '\0')
		ptr++;
	while (*ptr != ch && ptr != s)
		ptr--;
	if (*ptr == ch)
		return (ptr);
	else
		return (0);
}

/* int	main()
{
	char	str[50] = "String en el que buscar";
	char	c = '\0';

	printf("%s\n",strrchr(str,c));
	printf("%s\n",ft_strrchr(str,c));
} */