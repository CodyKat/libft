/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:31 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 15:25:17 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		to_find;

	ptr = s;
	to_find = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ptr == to_find)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
