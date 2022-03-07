/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:10 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/07 21:38:37 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (s1 == 0)
		return (0);
	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	strlcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
