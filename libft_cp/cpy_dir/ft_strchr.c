/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:54 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 15:53:37 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	to_find;

	to_find = c;
	while (*s != 0)
	{
		if (*s == to_find)i
			return ((char *)s);
		s++;
	}
	return (0);
}
