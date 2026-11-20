/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:18:34 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 18:39:08 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	unsigned char const	*psrc;
	int					i;

	pdest = dest;
	psrc = src;
	i = 0;
	while (n > 0)
	{
		pdest[i] = psrc[i];
		n--;
		i++;
	}
	return (dest);
}
