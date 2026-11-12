/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:19:41 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:19:42 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (size > 0 && src[i])
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	while(src[i])
		i++;
	return(i);
}

/*#include <stdiko.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc != 3)
		return(0);
	int size = atoi(argv[2]);
	char dest [size];

	ft_strlcpy(dest, argv[1], size);
	printf("%s", dest);
}*/


