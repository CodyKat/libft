/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:16:58 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 21:19:32 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstradd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	while (node->next != 0)
	{
		node = node->next;
	}
	node->next = new;
}
