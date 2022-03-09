/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:30 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 22:37:02 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (0);
		s1++;
		s2++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main()
{
	printf("%d %d\n", strncmp("abcd", "abc", 3), ft_strncmp("abcd", "abc", 3));
	printf("%d %d", strncmp("abcd", "ab", 3), ft_strncmp("abcd", "ab", 3));
	return 0;
}
