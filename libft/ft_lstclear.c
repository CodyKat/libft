/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:56:31 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/12 21:50:58 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*front;

	front = *lst;
	if (front == 0)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		front = (*lst)->next;
		free(*lst);
		*lst = front;
	}
	*lst = 0;
}
