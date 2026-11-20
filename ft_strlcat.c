/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:20:06 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 18:42:43 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	ldest;

	i = 0;
	l = 0;
	if (!dst || !src)
		return (0);
	while (size > 0 && dst[i] != '\0')
	{
		i++;
		size--;
	}
	ldest = i;
	while (size > 1 && src[l])
	{
		dst[i] = src[l];
		l++;
		i++;
		size--;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ldest + ft_strlen(src));
}

/*int main (void)
{
	char dest[30] = "CCCCC";
	printf("%ld\n", ft_strlcat(dest, "AAAAAAAAA", -1));
	printf("%s", dest);
	return(0);
}*/