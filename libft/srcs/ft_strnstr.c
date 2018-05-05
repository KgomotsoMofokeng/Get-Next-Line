/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:39:11 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/26 16:27:39 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len1;

	if (*s2 == '\0')
		return ((char *)s1);
	len1 = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= len1)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len1) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
