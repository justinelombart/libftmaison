/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:20:39 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 12:04:00 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *p, int c)
{
	int				i;
	unsigned char	val;

	i = 0;
	if (!p)
		return (NULL);
	val = (unsigned char)c;
	while (p[i] != '\0')
	{
		if (p[i] == val)
			return ((char *)p + i);
		i++;
	}
	if (p[i] == val)
		return ((char *)p + i);
	return (NULL);
}
