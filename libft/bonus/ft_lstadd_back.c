/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:16:58 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 20:05:22 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstradd_back(t_list **lst, t_list *new)
{
	while (lst->next != 0)
	{
		lst = lst->next;
	}
	lst->next = new;
}
