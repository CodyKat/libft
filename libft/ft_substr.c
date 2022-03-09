/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:46 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 22:30:06 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*result;

	s_len = ft_strlen(s);
	if (s_len <= start)
		return (0);
	else
	{
		if (start + len <= s_len)
		{
			result = (char *)malloc(sizeof(char) * (len + 1));
			if (result == 0)
				return (0);
			ft_strlcpy(result, s + start, len + 1);
		}
		else
		{
			result = (char *)malloc(sizeof(char) * (s_len - start + 1));
			if (result == 0)
				return (0);
			ft_strlcpy(result, s + start, s_len - start + 1);
		}
	}
	return (result);
}

#include <stdio.h>

int main()
{
	char *p2 = ft_substr("abcdef", 2, 2);
	printf("%s", p2);
	return 0;
}
