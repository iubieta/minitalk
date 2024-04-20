/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:32:48 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 16:39:49 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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