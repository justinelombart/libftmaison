/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:23:22 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 18:33:54 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	s;

	if (size != 0 && (n * size) / size != n)
		return (NULL);
	s = n * size;
	ptr = malloc (s);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, s);
	return (ptr);
}
