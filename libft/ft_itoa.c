/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:16 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/07 19:09:24 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"

static int	ft_cal_num_len(int c)
{
	int	len;

	len = 0;
	while (c > 0)
	{
		c /= 10;
		len++;
	}
	return (len);
}

static char	*ft_make_num(char *result, long long num, int sign, int num_len)
{
	if (sign == 1)
	{
		result = (char *)malloc(sizeof(char) * (num_len + 1));
		result[num_len] = '\0';
		while (--num_len >= 0)
		{
			result[num_len] = num % 10;
			num /= 10;
		}
	}
	else
	{
		result = (char *)malloc(sizeof(char) * (num_len + 2));
		result[num_len + 1] = '\0';
		while (--num_len > 0)
		{
			result[num_len] = num % 10;
			num /= 10;
		}
		result[num_len] = '-';
	}
	return (result);
}

char	*ft_itoa(int c)
{
	char		*result;
	long long	num;
	int			sign;
	int			num_len;

	num = c;
	if (num < 0)
	{
		sign = -1;
		num *= -1;
	}
	else
		sign = 1;
	num_len = ft_cal_num_len(c);
	return (ft_make_num(result, num, sign, num_len));
}
