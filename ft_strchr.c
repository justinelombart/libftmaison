/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:20:39 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:20:40 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *p, int c)
{
	int i;
	unsigned char val;

	i = 0;
	if (!p)
		return(NULL);
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

/*include <stdio.h>

int main(void)
{
	char s[] = "tripouille";
	printf("%s", ft_strchr(s, 't' + 256));
	return (0);
}*/