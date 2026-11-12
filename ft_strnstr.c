/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:21:11 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:21:12 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;
	const char	*tmp;
	i = 0;
	if (!little || !little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		l = 0;
		if (big[i] == little[l])
		{
			tmp = big + i;
			while (big[i + l] == little[l] && big[i + l] && little[l] && (i + l) < len)
				l++;
			if ((int)l == ft_strlen(little))
			{
				return ((char *)tmp);
			}
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	printf("\n%s",ft_strnstr(empty, "", -1));
// 	return(0);
// }

// 	/* 1 */ check(ft_strnstr(haystack, needle, 0) == 0); showLeaks();
// 	/* 2 */ check(ft_strnstr(haystack, needle, -1) == haystack + 1); showLeaks();
// 	/* 3 */ check(ft_strnstr(haystack, "a", -1) == haystack); showLeaks();
// 	/* 4 */ check(ft_strnstr(haystack, "c", -1) == haystack + 4); showLeaks();
// 	/* 5 */ check(ft_strnstr(empty, "", -1) == empty); showLeaks();
// 	/* 6 */ check(ft_strnstr(empty, "", 0) == empty); showLeaks();
// 	/* 7 */ check(ft_strnstr(empty, "coucou", -1) == 0); showLeaks();
// 	/* 8 */ check(ft_strnstr(haystack, "aaabc", 5) == haystack); showLeaks();
// 	/* 9 */ check(ft_strnstr(empty, "12345", 5) == 0); showLeaks();
// 	/* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();
// 	/* 12 mbueno-g */ check(ft_strnstr(haystack, "a", 1) == haystack); showLeaks();
// 	/* 13 opsec-infosec */ check(ft_strnstr("1", "a", 1) == NULL); showLeaks();
// 	/* 14 opsec-infosec */ check(ft_strnstr("22", "b", 2) == NULL); showLeaks();
// 	/* 15 */ { const char *h = "22"; check(ft_strnstr(h, "22", 3) == h); } showLeaks();
// 	/* 16 */ check(ft_strnstr(haystack, "", 0) == haystack); showLeaks();
// 	write(1, "\n", 1);
// 	return (0);
// }
