/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:28:28 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 02:28:59 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	determine_which_sort(t_data *new, t_data *b)
{
	if (ft_lstsize(new) == 2)
		sort_2numbers(&new);
	else if (ft_lstsize(new) == 3)
		sort_3numbers(&new);
	else if (ft_lstsize(new) == 4)
		sort_4numbers(&new, &b);
	else if (ft_lstsize(new) == 5)
		sort_5numbers(&new, &b);
	else if (ft_lstsize(new) > 5 && (ft_lstsize(new) <= 100
			|| ft_lstsize(new) <= 500))
	{
		index_all_items(new);
		sort_infinitenumbers(&new, &b);
	}
	exit(1);
}

int	main(int ac, char *av[])
{
	t_data	*new;
	t_data	*b;
	t_data	*l;

	new = NULL;
	b = NULL;
	if (ac > 1)
	{
		av = my_function(av);
		check_double(av);
		while (*av)
		{
			check_args(*av);
			l = ft_lstnew(ft_atoi(*av));
			ft_lstadd_back(&new, l);
			av++;
		}
		determine_which_sort(new, b);
	}
	return (EXIT_SUCCESS);
}
