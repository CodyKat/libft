/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:18 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 20:03:43 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
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
#include <stdio.h>
#include <string.h>
int main()
{
	int return_val;
	char *s1 = (char *)malloc(sizeof(char) * 10);
	char *s2 = (char *)malloc(sizeof(char) * 10);
	s1 = strcpy(s1, "abcd");
	s2 = strcpy(s2, "abcd");
	return_val = strlcat(s1, "fff", 10);
	return_val = ft_strlcat(s2, "fff", 10);
	printf("%s %d\n", s1, return_val);
	printf("%s %d", s2, return_val);
	return (0);
}
