/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:19:41 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/13 02:16:19 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(const char *string)
{
	int		i;
	size_t	len;
	char	*p;

	i = 0;
	len = ft_strlen(string);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (free(p), NULL);
	while (string[i])
	{
		p[i] = string[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	size_t	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	if ((result > 2147483647ull && sign == 1)
		|| (result > 2147483648ull && sign == -1))
		ft_error();
	return (sign * (int)result);
}

t_data	*ft_lstnew(int content)
{
	t_data	*p;

	p = malloc(sizeof(t_data));
	if (!p)
		return (free(p), NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

void	ft_lstadd_back(t_data **lst, t_data *a)
{
	t_data	*anything;

	anything = NULL;
	if (!a)
		free(lst);
	if (*lst)
	{
		anything = ft_lstlast(*lst);
		anything->next = a;
	}
	else
		*lst = a;
}
