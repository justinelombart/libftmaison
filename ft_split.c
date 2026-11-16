/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:28:03 by justine.lom       #+#    #+#             */
/*   Updated: 2026/11/15 14:34:10 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			nb++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nb);
}

char	*putstr(int start, int end, char const *src)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * ((end - start) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < (end - start))
	{
		str[i] = src[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	freeall(int index, char **src)
{
	index--;
	while (index > -1)
	{
		free(src[index]);
		index--;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		start;
	int		index;

	if (!s)
		return (NULL);
	final = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!final)
		return (NULL);
	index = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			final[index] = putstr(start, i, s);
			if (!final[index])
			{
				freeall(index, final);
				return(NULL);
			}
			index++;
		}
	}
	final[ft_count(s, c)] = NULL;
	return (final);
}
