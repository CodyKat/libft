/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:54 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 20:36:13 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	to_find;

	if (s == 0)
		return (0);
	to_find = c;
	while (*s != 0)
	{
		if (*s == to_find)
			break ;
		s++;
	}
	return ((char *)s);
}
#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n", strchr("abcde", 'c'));
	printf("%s\n", ft_strchr("abcde", 'c'));
	printf("%s\n", strchr("abcde", '\0'));
	printf("%s", ft_strchr("abcde", '\0'));
	return 0;
}
