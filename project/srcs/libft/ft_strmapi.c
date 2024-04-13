/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:00:48 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/20 17:44:34 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_mod;
	size_t	i;

	if (!s)
		return (NULL);
	s_mod = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s_mod)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		s_mod[i] = f(i, s[i]);
		i++;
	}
	s_mod[i] = '\0';
	return (s_mod);
}

/* char	ft_to_upper(int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
int main()
{
	char	str[] = "hola mundo";
	char	*s_final;

	s_final = ft_strmapi(str, ft_to_upper);
	printf("%s",s_final);
} */