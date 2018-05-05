/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 16:43:29 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/26 16:20:36 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		len1;
	int		len2;

	len1 = 0;
	len2 = 0;
	if (needle == NULL || ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[len1])
	{
		if (haystack[len1] == needle[len2])
			len2++;
		else
		{
			len1 -= len2;
			len2 = 0;
		}
		if (!needle[len2])
			return ((char *)haystack + len1 - len2 + 1);
		len1++;
	}
	return (NULL);
}
