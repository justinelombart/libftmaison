/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:23:22 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:23:23 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
	void *ptr;
	size_t s;

	if (size != 0 && (n * size)/size != n)
		return(NULL);
	s = n * size;
	ptr = malloc (s);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, s);
	return(ptr);
}



// malloc + remplir de 0; --> utiliser bzero

// The calloc() function allocates memory for an array of nmemb 
// elements of size 
// bytes each and returns a pointer to the allocated memory. The memory is set to zero. 
// If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value 
// that can later be successfully passed to free(). The calloc() function allocates 
// memory for an array of nmemb elements of size bytes each and returns a pointer to 
// the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() 
// returns either NULL, or a unique pointer value that can later be successfully passed to free(). 