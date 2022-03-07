/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:54 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/07 21:32:03 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	to_find;

	if (s == 0)
		return (0);
	to_find = c;
	while (*s != 0)
	{
		if (*s == to_find)
			break ;
		s++;
	}
	return (s);
}
