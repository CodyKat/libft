/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:42 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 22:39:24 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

static int	is_in_set(const char chr, const char *set)
{
	while (set++ != 0)
	{
		if (chr == *set)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*start;
	char	*end;
	char	*result;
	int		result_len;

	if (s1 == 0 || s1 == 0)
		return (0);
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (is_in_set(*start, set))
	{
		start++;
	}
	while (is_in_set(*end, set))
	{
		end--;
	}
	result_len = end - start + 1;
	if (result_len <= 0)
		return (0);
	result = (char *)malloc(sizeof(char) * (result_len + 1));
	ft_strlcpy(result, start, result_len + 1);
	return (result);
}
