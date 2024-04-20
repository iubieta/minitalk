/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:11:21 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/18 19:52:03 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}

/* int main()
{
	char str[50] = "Buscar una aguja en un pajar";

	printf("%s\n",ft_substr(str, 11, 5));
} */