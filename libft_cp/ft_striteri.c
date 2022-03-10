/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:38:46 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 13:43:22 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;
	unsigned int	s_len;

	index = 0;
	s_len = ft_strlen(s);
	while (index < s_len)
	{
		f(index, s + index);
		index++;
	}
}

#include <stdio.h>

void func(unsigned int idx, char* chr)
{
	*chr += idx;
}

int main()
{
	char s[10] = "abcde";
	void	(*f)(unsigned int, char *);
	f = func;
	ft_striteri(s, f);
	printf("%s", s); // acegi
	return 0;
}
