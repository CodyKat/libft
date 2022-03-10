/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:55 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/09 22:40:01 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c + ('A' - 'a'));
	return (c);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%c\n", ft_toupper('A' + 256));
	printf("%c\n", toupper('A' + 256));
	return 0;
}
