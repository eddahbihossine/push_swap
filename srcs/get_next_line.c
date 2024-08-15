/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:44:58 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 02:14:41 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapbonus.h"

char	*rest(char **f, int i)
{
	int		length;
	char	*k;

	length = ft_strlen(*f + i);
	k = ft_substr(*f, i, length);
	free(*f);
	*f = NULL;
	return (k);
}

char	*ft_line(char **f, char **line, int i)
{
	*line = ft_substr(*f, 0, i + 1);
	*f = rest(f, i + 1);
	return (*line);
}

int	check_the_n(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (i);
		i++;
	}
	free(buffer);
	return (-1);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*f;
	char		*line;
	int			to_read;
	int			i;

	if (!f)
		f = ft_strdup("");
	buffer = ft_calloc(BUFFER_SIZE + 1, 1);
	to_read = read(fd, buffer, BUFFER_SIZE);
	while (to_read >= 0)
	{
		if ((!f[0] && !to_read) || to_read == -1)
			break ;
		buffer[to_read] = '\0';
		f = ft_strjoin(f, buffer);
		i = check_the_n(f);
		if (i != -1)
			return (free(buffer), ft_line(&f, &line, i));
		if (!to_read)
			return (free(buffer), rest(&f, 0));
		to_read = read (fd, buffer, BUFFER_SIZE);
	}
	return (free(buffer), free(f), f = NULL, NULL);
}
