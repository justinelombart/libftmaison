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

int	ft_count (char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (!s && ft_strlen(s) > 1)
	{
		while (s[i] == c)
			nb++;
		while (s[i])
		{
			if (s[i] == c)
				nb++;
		}
	}
}

char **ft_split(char const *s, char c)
{
	
	
}