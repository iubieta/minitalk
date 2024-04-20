/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:44:50 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 16:40:04 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <ctype.h>
#include <stdio.h> */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* int	main()
{
	unsigned char	c;
	
	c = 'A';
	printf("%c\n",tolower(c));
	printf("%c\n",ft_tolower(c));
} */