/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapbonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:39:52 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 04:32:18 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAPBONUS_H
# define PUSH_SWAPBONUS_H
# include	<stdlib.h>
# include	<stdio.h>
# include	<unistd.h>
# include	<string.h>
# include	<ctype.h>
# include	<limits.h>
# define BUFFER_SIZE 42

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
void	ft_lstadd_front(t_data **lst, t_data *a);
void	check(t_data **a);
void	ft_lstadd_front(t_data **lst, t_data *a);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ss(t_data *a, t_data	*b);
void	rr(t_data	**a, t_data	**b);
void	rrr(t_data	**a, t_data	**b);
void	*ft_calloc(size_t count, size_t size);
char	*get_next_line(int fd);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
#endif