/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:50 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/07 19:38:30 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (s != 0)
	{
		while (*s == c)
			s++;
		if (s == 0)
			return (count);
		while (s != 0 && *s != c)
			s++;
		count++;
	}
}

static int	ft_strlen_c(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != 0 && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static void	ft_strcpy_c(char *dest, const char *src, char c)
{
	while (*src != 0 && *src != c)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
}

char	**ft_split(const char *s, char c)
{
	int		words;
	int		word_len;
	int		index;
	char	**table;

	index = 0;
	if (s == 0)
		return (0);
	words = ft_count_words(s, c);
	table = (char **)malloc(sizeof(char *) * (words + 1));
	while (index < words)
	{
		word_len = ft_strlen_c(s, c);
		table[index] = (char *)malloc(sizeof(char) * (word_len + 1));
		ft_strcpy_c(table[index], s, c);
		s += word_len;
		while (*s != '\0' && *s == c)
			s++;
		index++;
	}
	table[index] = 0;
	return (table);
}
