/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:19:06 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:19:07 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size )
{
	unsigned char *pdest;
	unsigned char const *psrc;

	pdest = dest;
	psrc = src;
	while(size > 0)
	{
		size--;
		pdest[size] = psrc[size];
	}
	return(dest);
}

/*#include <stdio.h>
int main( void )
{
    char str[7] = "Word00\0";
	ft_memmove(str + 2, str, 4);
	printf("%s", str);
}*/
