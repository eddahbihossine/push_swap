/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:44:29 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 02:44:30 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *new)
{
	t_data	*swap;

	if (ft_lstsize (new) > 1)
	{
		swap = (t_data *) malloc(sizeof(t_data));
		swap->content = new->content;
		new->content = new->next->content;
		new->next->content = swap->content;
		free(swap);
		write(1, "sa\n", 3);
	}
}

void	sb(t_data *b)
{
	t_data	*swap;

	if (ft_lstsize (b) > 1)
	{
		swap = (t_data *) malloc(sizeof(t_data));
		swap->content = b->content;
		b->content = b->next->content;
		b->next->content = swap->content;
		free(swap);
	}
	write(1, "sb\n", 3);
}

void	ra(t_data **new)
{
	t_data	*last;

	if (*new != NULL && (*new)->next != NULL)
	{
		last = *new;
		*new = (*new)->next;
		last->next = NULL;
		ft_lstadd_back(new, last);
		write(1, "ra\n", 3);
	}
}

void	rb(t_data **new)
{
	t_data	*last;

	if (*new != NULL && (*new)->next != NULL)
	{
		last = *new;
		*new = (*new)->next;
		last->next = NULL;
		ft_lstadd_back(new, last);
		write(1, "rb\n", 3);
	}
}
