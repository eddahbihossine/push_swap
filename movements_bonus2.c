#include "push_swapbonus.h"

void	sa(t_data *a)
{
	t_data	*swap;

	if (ft_lstsize (a) > 1)
	{
		swap = (t_data *) malloc(sizeof(t_data));
		swap->content = a->content;
		a->content = a->next->content;
		a->next->content = swap->content;
		free(swap);
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
}

void	ra(t_data **a)
{
	t_data	*last;

	if (*a != NULL && (*a)->next != NULL)
	{
		last = *a;
		*a = (*a)->next;
		last->next = NULL;
		ft_lstadd_back(a, last);

	}
}

void	rb(t_data **a)
{
	t_data	*last;

	if (*a != NULL && (*a)->next != NULL)
	{
		last = *a;
		*a = (*a)->next;
		last->next = NULL;
		ft_lstadd_back(a, last);
	}
}
