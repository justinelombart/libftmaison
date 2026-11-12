/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:18:34 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:18:34 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char const	*psrc;
	int	i;

	pdest = dest;
	psrc = src;
	i = 0;

	while (n > 0)
	{
		pdest[i] = psrc[i];
		n--;
		i++;
	}
	return(dest);
}

/*#include <stdio.h>
int main( void )
{
    char buffer[] = "This is a test of the memset function";
    char dest[4];

    char str[6] = "Word";
	ft_memcpy(str + 2, str, 4);
	printf("%s", str);

    //printf( "Before: %s\n", buffer );
    //printf( "After:  %s\n", ft_memcpy(dest, buffer, 4 ));

}*/

