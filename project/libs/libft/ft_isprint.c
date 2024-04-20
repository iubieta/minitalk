/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:47:28 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/15 17:37:44 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	unsigned char c;
	c = 'ñ';
	printf("%i\n",isascii(c));
	printf("%i\n",ft_isascii(c));
}*/