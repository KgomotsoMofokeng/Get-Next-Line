/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 15:18:14 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/25 11:22:17 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	char			*s1;
	const char		*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (const char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
