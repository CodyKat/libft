/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:25:12 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 13:44:15 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	unsigned int	index;
	char			*result;

	index = 0;
	s_len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (s_len + 1));
	if (result == 0)
		return (0);
	while (index < s_len)
	{
		result[index] = f(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}

#include <stdio.h>

// example of applied func
char func(unsigned int idx, char letter)
{
	return (letter + idx + 3);
}

int main()
{
	char (*f)(unsigned int, char);
	

	f = func;
	printf("%s", ft_strmapi("abcd", f)); // dfhj
	return 0;
}
