/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:05:26 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/03/08 22:00:56 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (s == 0)
		return (0);
	len = 0;
	while (*s++ != 0)
	{
		len++;
	}
	return (len);
}
