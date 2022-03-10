/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:04:16 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/10 12:54:14 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_cal_num_len(long c)
{
	int	len;

	if (c == 0)
		return (1);
	len = 0;
	while (c > 0)
	{
		c /= 10;
		len++;
	}
	return (len);
}

static char	*ft_make_num(long num, int sign, int num_len)
{
	char	*result;

	if (sign == 1)
	{
		result = (char *)malloc(sizeof(char) * (num_len + 1));
		if (result == 0)
			return (0);
		result[num_len] = '\0';
		while (--num_len >= 0)
		{
			result[num_len] = (num % 10) + '0';
			num /= 10;
		}
	}
	else
	{
		result = (char *)malloc(sizeof(char) * (num_len + 2));
		result[num_len + 1] = '\0';
		while (num_len > 0)
		{
			result[num_len] = (num % 10) +'0';
			num /= 10;
			num_len--;
		}
		result[num_len] = '-';
	}
	return (result);
}

char	*ft_itoa(int c)
{
	long	num;
	int		sign;
	int		num_len;

	num = c;
	if (num < 0)
	{
		sign = -1;
		num *= -1;
	}
	else
		sign = 1;
	num_len = ft_cal_num_len(num);
	return (ft_make_num(num, sign, num_len));
}

#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(+2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa('a'));
	return 0;
}
