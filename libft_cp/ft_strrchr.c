/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:38 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 13:44:42 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	to_find;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	to_find = c;
	while (s_len > 0)
	{
		if (*(s + s_len - 1) == to_find)
			return ((char *)(s + s_len - 1));
		s_len--;
	}
	return ("");
}
#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n%s\n", strrchr("abccde", 'c'), ft_strrchr("abccde", 'c'));
	printf("%s\n%s\n", strrchr("abc", '\0'), ft_strrchr("abc", '\0'));
	return 0;
}
