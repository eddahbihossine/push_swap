/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:51:52 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 04:34:06 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapbonus.h"

void	get_moves(char *line, t_data	**a, t_data	**b)
{
	if (!(ft_strncmp(line, "sa\n", 3)))
		sa(*a);
	else if (!(ft_strncmp(line, "sb\n", 3)))
		sb(*b);
	else if (!(ft_strncmp(line, "ss\n", 3)))
		ss(*a, *b);
	else if (!(ft_strncmp(line, "ra\n", 3)))
		ra(a);
	else if (!(ft_strncmp(line, "rb\n", 3)))
		rb(b);
	else if (!(ft_strncmp(line, "rr\n", 3)))
		rr(a, b);
	else if (!(ft_strncmp(line, "rra\n", 4)))
		rra(a);
	else if (!(ft_strncmp(line, "rrb\n", 4)))
		rrb(b);
	else if (!(ft_strncmp(line, "rrr\n", 4)))
		rrr(a, b);
	else if (!(ft_strncmp(line, "pa\n", 3)))
		pa(b, a);
	else if (!(ft_strncmp(line, "pb\n", 3)))
		pb(a, b);
	else
		ft_error();
}

void	lst_clear(char **av, t_data **a)
{
	av = my_function(av);
	check_double(av);
	while (*av)
	{
		check_args(*av);
		ft_lstadd_back(a, ft_lstnew(ft_atoi(*av)));
		av++;
	}
}

void	cheaks(t_data *a, t_data *b)
{
	if (!b && check_sort(&a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	int		i;
	t_data	*a;
	t_data	*b;
	char	*line;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		lst_clear(av, &a);
		while (1)
		{
			line = get_next_line(0);
			if (!line)
			{
				i = 1;
				break ;
			}
			get_moves(line, &a, &b);
		}
		cheaks(a, b);
		if (i)
			exit(1);
	}
	return (0);
}
