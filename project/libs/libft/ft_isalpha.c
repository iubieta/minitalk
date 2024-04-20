/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:53:30 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/20 14:53:21 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char c;
	c = '?';
	printf("%i\n",isalpha(c));
	printf("%i\n",ft_isalpha(c));
} */