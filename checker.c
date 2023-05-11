/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:51:52 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/11 01:53:13 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swapbonus.h"

t_data	*parse_data(int ac , char *av[])
{
	t_data	*a;
	t_data 	*l;

	a = NULL;
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
	}
	return(a);
}

void get_moves(char *line, t_data *a,t_data *b)
{
	
if(!(strcmp(line,"sa\n")))
		sa(a);
else if(!(strcmp(line,"sb\n")))
		sb(b);
else if(!(strcmp(line,"ss\n")))
		ss(a,b);
else if(!(strcmp(line,"ra\n")))
		ra(&a);
else if(!(strcmp(line,"rb\n")))
		rb(&b);
	//else if(!(strcmp(line,"rr\n")))
	// 	rr(&a,&b);
else if(!(strcmp(line,"rra\n")))
		rra(&b);
else if(!(strcmp(line,"rrb\n")))
		rrb(&b);
	//else if(!(strcmp(line,"rrr\n")))
	// 	rrr(&a,&b);
else if(!(strcmp(line,"pa\n")))
{
	if(!b)
		return ;
		pa(&b,&a);
}
else if(!(strcmp(line,"pb\n")))
		pb(&a,&b);	
else
		ft_error();
}
int main(int ac , char **av)
{
	t_data *a = parse_data(ac,av);
	t_data *b;
	b = NULL;
	char *line;
	while(1)
	{
		line=get_next_line(0);
		if(!line)
			break;
		get_moves(line,a,b);
	}
	if(!(check_sort(&a)))
		write(1,"KO\n",3);
	else
		write(1,"OK\n",3);
	return(0);

}
