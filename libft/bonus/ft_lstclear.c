/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:56:31 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 20:48:18 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*front;
	t_list	*rear;

	front = *lst;
	rear = *lst;
	while (1)
	{
		if (front->next = 0)
		{
			ft_lstdelone(front);
			break;
		}
		front = front->next;
		ft_lstdelone(rear);
		rear = front;
	}
}
