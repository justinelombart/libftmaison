/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:28:20 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/12 17:28:26 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const	*str1;
	unsigned char const	*str2;
	size_t	i;

	i = 0;
	if (!s1 || !s2 || n == 0)
		return (0);
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return(str1[i] - str2[i]);
		}
		i++;
	}
	return(str1[i - 1] - str2[i - 1]);
}

// int main(void)
// {
// 	char s[] = {'\x80', 0, 127, 0};
// 	char sCpy[] = {'\x80', 0, 127, 0};
// 	printf("%d", ft_memcmp(s, sCpy, 4));
// 	return(0);
// }
// // int main(void)
// {
// 	signal(SIGSEGV, sigsegv);
// 	title("ft_memcmp\t: ")

// 	/* 1 */ check(!ft_memcmp(s, sCpy, 4)); showLeaks();
// 	/* 2 */ check(!ft_memcmp(s, s2, 0)); showLeaks();
// 	/* 3 */ check(ft_memcmp(s, s2, 1) > 0); showLeaks();
// 	/* 4 */ check(ft_memcmp(s2, s, 1) < 0); showLeaks();
// 	/* 5 */ check(ft_memcmp(s2, s3, 4) != 0); showLeaks();
// 	write(1, "\n", 1);
// 	return (0);
// }
