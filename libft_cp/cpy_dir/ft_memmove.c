/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:43 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 19:35:42 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(char *dst, const char *src, size_t len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	if (dst > src)
	{
		p_dst = (unsigned char *)(dst + len - 1);
		p_src = (const unsigned char *)(src + len - 1);
		while (len-- > 0)
		{
			*p_dst-- = *p_src--;
		}
	}
	else
	{
		p_dst = (unsigned char *)dst;
		p_src = (const unsigned char *)src;
		while (len-- > 0)
		{
			*p_dst++ = *p_src++;
		}
	}
	return (dst);
}
