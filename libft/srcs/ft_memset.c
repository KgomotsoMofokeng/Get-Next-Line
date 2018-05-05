/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 13:59:00 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/25 11:35:53 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*st;

	i = 0;
	st = (unsigned char *)s;
	while (i < len)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (st);
}
