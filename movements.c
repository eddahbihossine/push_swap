/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:39:54 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 23:00:08 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data **a)
{
	t_data	*front;
	t_data	*prev;

	if (*a != NULL && (*a)->next != NULL)
	{
		front = *a;
		prev = NULL;
		while (front->next != NULL)
		{
			prev = front;
			front = front->next;
		}
		prev->next = NULL;
		front->next = *a;
		*a = front;
		write(1, "rra\n", 4);
	}
}

void	rrb(t_data **b)
{
	t_data	*front;
	t_data	*prev;

	if (*b != NULL && (*b)->next != NULL)
	{
		front = *b;
		prev = NULL;
		while (front->next != NULL)
		{
			prev = front;
			front = front->next;
		}
		prev->next = NULL;
		front->next = *b;
		*b = front;
		write (1, "rrb\n", 4);
	}
}

void	pb(t_data **a, t_data **b)
{
	t_data	*swap;

	if (a != NULL && (*a) != NULL)
	{
		swap = *a;
		*a = (*a)->next;
		swap->next = *b;
		*b = swap;
		write (1, "pb\n", 3);
	}
}

void	pa(t_data **b, t_data **a)
{
	t_data	*swap;
	if(!b)
		ft_error();
	if (b != NULL || (*b) != NULL)
	{
		swap = *b;
		*b = (*b)->next;
		swap->next = *a;
		*a = swap;
		write(1, "pa\n", 3);
	}
}

void	ss(t_data *a, t_data	*b)
{
	sa(a);
	sb(b);
}
