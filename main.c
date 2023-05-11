/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:28:28 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/10 20:26:44 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	determine_which_sort(t_data *a, t_data *b)
{
	if (ft_lstsize(a) == 2)
		sort_2numbers(&a);
	else if (ft_lstsize(a) == 3)
		sort_3numbers(&a);
	else if (ft_lstsize(a) == 4)
		sort_4numbers(&a, &b);
	else if (ft_lstsize(a) == 5)
		sort_5numbers(&a, &b);
	else if (ft_lstsize(a) > 5 && (ft_lstsize(a) <= 100
			|| ft_lstsize(a) <= 500))
	{
		index_all_items(a);
		sort_infinitenumbers(&a, &b);
	}
	exit(1);
}

int	main(int ac, char *av[])
{
	t_data	*a;
	t_data	*b;
	t_data	*l;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		av = my_function(av);
		check_double(av);
		while (*av)
		{
			check_args(*av);
			l = ft_lstnew(ft_atoi(*av));
			ft_lstadd_back(&a, l);
			av++;
		}
		determine_which_sort(a, b);
	}
	return (EXIT_SUCCESS);
}
