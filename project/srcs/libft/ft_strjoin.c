/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:38:34 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/21 18:49:07 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;

	final_str = NULL;
	if (!s1 && !s2)
		return (NULL);
	else if (s1 && !s2)
		final_str = ft_strdup(s1);
	else if (!s1 && s2)
		final_str = ft_strdup(s2);
	else if (s1 && s2)
	{
		final_str = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!final_str)
			return (NULL);
		final_str = ft_memcpy(final_str, s1, ft_strlen(s1));
		ft_strlcat(final_str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	}
	if (!final_str)
		return (NULL);
	else
		return (final_str);
}

/* int main()
{
	char	s1[50]="Hola ";
	char	s2[50]="mundo";

	printf("%s\n", ft_strjoin(s1, s2));
} */