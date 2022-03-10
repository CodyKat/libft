/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:31 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 20:56:04 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		to_find;

	ptr = s;
	to_find = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ptr == to_find)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n%s\n", memchr("abcdcd", 'c', 5), ft_memchr("abcdcd", 'c', 5));
	printf("%s\n%s\n", memchr("abcdcd", 'c', 2), ft_memchr("abcdcd", 'c', 2));
	return 0;
}
