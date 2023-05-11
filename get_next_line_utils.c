/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:47:00 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 22:47:30 by heddahbi         ###   ########.fr       */
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
