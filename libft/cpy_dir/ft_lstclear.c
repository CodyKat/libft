/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:56:31 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 21:20:18 by jaemjeon         ###   ########.fr       */
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
		if (front->next == 0)
		{
			del(front);
			free(front);
			break;
		}
		front = front->next;
		del(rear);
		free(rear);
		rear = front;
	}
}
