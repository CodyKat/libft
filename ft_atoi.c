/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:03:53 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/11/06 20:16:22 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

extern int	errno;

typedef	struct s_atoi_info
{
	unsigned long	abs_result;
	unsigned long	cutoff;
	int				cutlim;
	int				sign;
}	t_atoi_info;

static void	init_value(unsigned long *abs_result, unsigned long *cutoff, \
							int *cutlim, int *sign)
{
	*abs_result = 0;
	*cutoff = 0;
	*cutlim = 0;
	*sign = 1;
}

static int	is_space(const char *c)
{
	if ((9 <= *c && *c <= 13) || *c == ' ')
		return (TRUE);
	return (FALSE);
}

int	ft_atoi(const char *str)
{
	unsigned long	abs_result;
	unsigned long	cutoff;
	int				cutlim;
	int				sign;

	init_value(&abs_result, &cutoff, &cutlim, &sign);
	while (is_space(str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign *= -1;
	}
	if (ft_isdigit(*str))
		cutlim = (*str - '0') * -1;
	while (ft_isdigit(*str))
	{
		cutoff = (10 * cutoff) + (cutlim);
		cutlim = (*str - '0');
		str++;
	}

	return (abs_result * sign);
}
