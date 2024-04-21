/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:48:55 by iubieta-          #+#    #+#             */
/*   Updated: 2024/04/21 12:45:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

#include "libft.h"

size_t	ft_cont_substr(char const *s, char c)
{
	size_t	cont;
	size_t	i;

	i = 0;
	cont = 0;
	while (s[i])
	{
		if (s[i] != c)
			cont++;
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	return (cont);
}

void	ft_free_array(char **array, int last_element)
{
	int	i;

	i = 0;
	while (i < last_element)
	{
		if (array[i])
			free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_fill(char const *s, char c, char **array, int len)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	end = 0;
	while (i < len)
	{
		start = end;
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		array[i] = ft_substr(s, start, (end - start));
		if (array[i] == NULL)
		{
			ft_free_array(array, i);
			return (NULL);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	cont;

	cont = ft_cont_substr(s, c);
	array = ft_calloc(cont + 1, sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_fill(s, c, array, cont);
	return (array);
}

/* int  main(void)
{
   char    *s = "      gfdgf biiu asd    ";
   char    c = ' ';
   size_t  count;
   char    **tab = ft_split(s, c);
   size_t  i;


   i = 0;
   count = ft_cont_substr(s, c);
   printf("s[0]: %c\n", s[0]);
   printf("COUNT en main: %zu\n", count);
   while (i < count)
   {
       printf("%s\n", tab[i]);
       i++;
   }
} */
