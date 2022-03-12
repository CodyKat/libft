/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:30 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/12 16:30:35 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u_s1;
	unsigned char	u_s2;

	while (n-- > 0)
	{
		if (*s1 >= 0)
			u_s1 = (unsigned char)*s1;
		else
			u_s1 = (unsigned char)*s1 + 256;
		if (*s2 >= 0)
			u_s2 = (unsigned char)*s2;
		else
			u_s2 = (unsigned char)*s2 + 256;
		if (u_s1 > u_s2)
			return (1);
		else if (u_s1 < u_s2)
			return (-1);
		else if (u_s1 == '\0' && u_s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
