/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:20:56 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 18:49:00 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char const	*ptr;
	unsigned char		val;
	size_t				i;

	i = 0;
	val = c;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == val)
			return ((char *)s + i);
		i++;
	}
	if (ptr[i] == val && n != 0)
		return ((char *)s + i);
	return (NULL);
}
