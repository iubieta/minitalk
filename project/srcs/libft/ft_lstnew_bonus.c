/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:01:16 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/20 18:04:56 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*my_list;

	my_list = (t_list *)malloc(sizeof(t_list));
	if (!my_list)
		return (NULL);
	my_list->content = content;
	my_list->next = NULL;
	return (my_list);
}
