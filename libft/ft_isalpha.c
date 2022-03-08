/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:00:39 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/08 21:12:35 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>

static int	is_in_uchar(int num)
{
	if (0 <= num && num <= 255)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	unsigned char	test_chr;

	if (is_in_uchar(c) == 0)
		return (0);
	test_chr = c;
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
