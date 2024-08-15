/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:50:00 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/12 22:35:44 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

char	**my_function(char *av[])
{
	char	*str;
	char	**result;
	char	*p;

	str = ft_strdup(" ");
	while (*(++av))
	{
		while (**av == ' ')
			(*av)++;
		if (**av == '\0')
			ft_error();
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str,*av);
		p = str;
	}
	result = ft_split(p, ' ');
	free (p);
	return (result);
}

void	check_double(char *av[])
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				ft_error();
			j++;
		}
			i++;
	}
}

void	check_args(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '.')
			ft_error();
		if (str[i] == '+' || str[i] == '-' || !(ft_isdigit (str[i])))
		{
			if (!(ft_isdigit(str[i + 1])))
				ft_error();
		}
		i++;
	}
	free(str);
}
