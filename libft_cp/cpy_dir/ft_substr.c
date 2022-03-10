/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:46 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 16:19:40 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*result;

	s_len = ft_strlen(s);
	if (s_len <= start)
		return ("");
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
