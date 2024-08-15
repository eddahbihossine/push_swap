/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:47:00 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 04:31:50 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapbonus.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	void			*k;
	int				n;

	n = sizeof(p);
	k = malloc(size * count);
	if (!k)
		return (free(k), NULL);
	if (count * size > SIZE_MAX && size)
		return (NULL);
	p = k;
	while (*p && (*p < n))
	{
		*p = 0;
		p++;
	}
	return ((void *)p);
}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (!str1[i] ||!str2[i])
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
