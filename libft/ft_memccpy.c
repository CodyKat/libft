/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:23 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/07 19:48:46 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		stop_point;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	if (dst == 0 || src == 0)
		return (0);
	stop_point = c;
	p_dst = dst;
	p_src = src;
	while (n-- > 0)
	{
		if (*p_src == stop_point)
			return (p_src + 1);
		*p_dst++ = *p_src++;
	}
	return (0);
}
