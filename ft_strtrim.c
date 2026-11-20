/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:28:18 by justine.lom       #+#    #+#             */
/*   Updated: 2026/11/20 18:44:15 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in(char c, char const *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_in(s1[i], set))
		i++;
	while (len > i && is_in(s1[len - 1], set))
		len--;
	len = len - i;
	trim = malloc(sizeof (char) * len + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[i], (size_t)len + 1);
	return (trim);
}

// int	main(void)
// {
// 	printf("KO test 1: %s\n", ft_strtrim("   xxxtripouille", " x"));
// 	// printf("test 2: %s\n", ft_strtrim("tripouille   xxx", " x"));
// 	printf("KO test 3: %s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
// 	printf("KO test 4: %s\n", ft_strtrim("   xxx   xxx", " x"));
// 	printf("KO test 5: %s\n", ft_strtrim("", "123"));
// 	printf("KO test 6: %s\n", ft_strtrim("123", ""));
// 	// printf("test 7: %s\n", ft_strtrim("", ""));
// 	// printf("test 8: %s\n", ft_strtrim("abcdba", "acb"));
// 	// printf("test 9: %s\n", ft_strtrim("ababa", "a"));
// 	return (0);
// }