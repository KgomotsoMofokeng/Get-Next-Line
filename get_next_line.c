/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:09:19 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/27 12:35:18 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_content(int const fd, char **stack)
{
	char	*buff;
	char	*temp;
	int		value;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	value = read(fd, buff, BUFF_SIZE);
	if (value > 0)
	{
		buff[value] = '\0';
		temp = ft_strjoin(*stack, buff);
		free(*stack);
		*stack = temp;
	}
	free(buff);
	return (value);
}

int			get_next_line(const int fd, char **line)
{
	static char	*stack = NULL;
	char		*line_feed;
	int			value;

	if ((!stack && (stack = (char *)malloc(sizeof(*stack))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	line_feed = ft_strchr(stack, '\n');
	while (line_feed == NULL)
	{
		value = ft_content(fd, &stack);
		if (value == 0)
		{
			if (ft_strlen(stack) == 0)
				return (0);
			stack = ft_strjoin(stack, "\n");
		}
		if (value < 0)
			return (-1);
		else
			line_feed = ft_strchr(stack, '\n');
	}
	*line = ft_strsub(stack, 0, ft_strlen(stack) - ft_strlen(line_feed));
	stack = ft_strdup(line_feed + 1);
	return (1);
}
