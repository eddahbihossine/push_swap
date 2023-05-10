/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 23:19:46 by heddahbi          #+#    #+#             */
/*   Updated: 2023/05/09 23:19:47 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (free(str), NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	free(s1);
	return (str);
}

static int	count_words(const char *str, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (*str)
	{
		if (*str == c)
		{
			counter++;
		}
		str++;
		index++;
	}
	return (index - counter);
}

static void	ft_free(char **str)
{
	int	index;

	index = 0;
	while (str[index])
		free(str[index++]);
	free(str);
}

static char	**ft_mysplit(char *s, char c)
{
	char	**p;
	size_t	len;
	int		i;

	i = 0;
	p = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!p)
		ft_error();
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			p[i] = ft_substr(s - len, 0, len);
			if (!p[i])
				ft_free(p);
			i++;
		}
		else
			s++;
	}
	p[i] = 0;
	return (p);
}

char	**ft_split( char *s, char c)
{	
	char	**str;

	if (!s)
		return (0);
		str = ft_mysplit(s, c);
	return (str);
}
