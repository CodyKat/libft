/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:18 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 22:56:03 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= 0)
		return (dst_len + src_len);
	if (dst_len + 1 < dstsize)
	{
		if (src_len >= dstsize)
			ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		else
			ft_memcpy(dst + dst_len, src, src_len);
		*(dst + dstsize - 1) = '\0';
	}
	return (dst_len + src_len);
}
