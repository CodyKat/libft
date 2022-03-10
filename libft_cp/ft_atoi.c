/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:03:53 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 13:38:26 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(const char *c)
{
	if ((9 <= *c && *c < 13) || *c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	char	*digit_ptr;

	result = 0;
	sign = 1;
	while (is_space(str))
	{
		str++;
	}
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign *= -1;
	}
	digit_ptr = (char *)str;
	while (ft_isdigit(*digit_ptr))
	{
		result *= 10;
		result += (*digit_ptr - '0');
		digit_ptr++;
	}
	return (result * sign);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d\n%d\n", atoi(" 	 -123abc123"), ft_atoi(" 	 -123abc123"));
	printf("%d\n%d", atoi(" +2147483648"), ft_atoi(" +2147483648"));
	return 0;
}
