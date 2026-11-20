/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:09:09 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 18:50:08 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	val;
	int				i;
	int				tmp;

	i = 0;
	tmp = 0;
	val = c;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == val)
		{
			tmp = i + 1;
			printf("%d", tmp);
		}
		i++;
	}
	if (s[i] == val)
		return ((char *)s + i);
	if (tmp == 0)
		return (NULL);
	return ((char *)s + tmp - 1);
}
