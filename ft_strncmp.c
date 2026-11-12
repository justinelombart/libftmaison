/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:20:46 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:20:47 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2 || n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (((unsigned char)!s1[i] && (unsigned char)!s2[i]) || i == n)
		return(s1[i - 1] - s2[i - 1]);	
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}



// int main(void)
// {
// 	signal(SIGSEGV, sigsegv);
// 	title("ft_memcmp\t: ")
	
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// 	/* 1 */ check(!ft_memcmp(s, sCpy, 4)); showLeaks();
// 	/* 2 */ check(!ft_memcmp(s, s2, 0)); showLeaks();
// 	/* 3 */ check(ft_memcmp(s, s2, 1) > 0); showLeaks();
// 	/* 4 */ check(ft_memcmp(s2, s, 1) < 0); showLeaks();
// 	/* 5 */ check(ft_memcmp(s2, s3, 4) != 0); showLeaks();
// 	write(1, "\n", 1);
// 	return (0);
// }
