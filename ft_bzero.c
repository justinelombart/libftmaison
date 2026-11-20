/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:18:19 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 18:32:48 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *p, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = p;
	i = 0;
	while (n > 0)
	{
		ptr[i] = '\0';
		n--;
		i++;
	}
}
