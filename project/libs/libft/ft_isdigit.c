/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:17:24 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 16:39:49 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char c;
	c = 'a';
	printf("%i\n",isdigit(c));
	printf("%i\n",ft_isdigit(c));
}*/