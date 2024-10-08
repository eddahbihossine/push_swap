/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:26:06 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 04:43:17 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<stdlib.h>
# include	<stdio.h>
# include	<unistd.h>
# include	<string.h>
# include	<ctype.h>
# include	<limits.h>
# include	<stdbool.h>

typedef struct s_data
{
	int				content;
	struct s_data	*next;
	int				index;
	int				instructions;

}	t_data;

char	*ft_strdup(const char *string);
t_data	*ft_lstnew(int content);
int		ft_atoi(char *str);
void	ft_lstadd_back(t_data **lst, t_data *a);
t_data	*ft_lstlast(t_data *lst);
void	ft_lstdelone(t_data *lst, void (*del)(void *));
char	*ft_strjoin(char	*s1, char	*s2);
int		ft_strlen(const char *str);
int		ft_error(void);
void	sa(t_data *a);
void	sb(t_data *a);
void	ra(t_data **a);
void	rb(t_data **a);
void	rra(t_data **a);
void	rrb(t_data **b);
void	rr(t_data	**a, t_data	**b);
void	rrr(t_data	**a, t_data	**b);
void	pa(t_data **b, t_data **a);
void	pb(t_data **a, t_data **b);
int		check_sort(t_data **a);
char	**my_function(char *av[]);
void	check_double(char *av[]);
void	check_args(char *str);
char	**ft_split(char *s, char c);
char	*ft_substr(char	*s, unsigned	int start, size_t len);
int		ft_lstsize(t_data *lst);
void	rr(t_data **a, t_data **b);
int		calculate_instructions(t_data *list, int pos);
void	index_all_items(t_data *a);
int		get_min_list(t_data *lst);
int		get_min3_list(t_data *lst);
int		get_min_pos(t_data *lst);
int		get_pos(t_data *lst, int index);
int		get_max_list(t_data *lst);
void	reset_all(t_data *a);
void	ft_lstadd_front(t_data **lst, t_data *a);
void	sort_2numbers(t_data **a);
void	sort_3numbers(t_data **a);
void	check(t_data **a);
void	sort_4numbers(t_data **a, t_data **b);
void	sort_5numbers(t_data **a, t_data **b);
void	sort_infinitenumbers(t_data **a, t_data **b);
void	push_to_a(t_data **a, t_data **b);
void	ft_lstadd_front(t_data **lst, t_data *a);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	determine_which_sort(t_data **a, t_data **b);
#endif
