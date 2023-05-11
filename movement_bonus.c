#include "push_swapbonus.h"

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
	}
}

void	pa(t_data **b, t_data **a)
{
	t_data	*swap;
	if(!b)
		return ;
	if (b != NULL || (*b) != NULL)
	{
		swap = *b;
		*b = (*b)->next;
		swap->next = *a;
		*a = swap;
	}
}

void	ss(t_data *a, t_data	*b)
{
	sa(a);
	sb(b);
}