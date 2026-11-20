/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:28:20 by justine.lom       #+#    #+#             */
/*   Updated: 2026/11/18 10:39:19 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		l;

	if (!s)
		return (NULL);
	if (len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s);
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	l = 0;
	ft_strlcpy(sub, &s[start], len);
	while (s[start + l] && (len - l) > 0)
	{
		sub[l] = s[start + l];
		l++;
	}
	sub[l] = '\0';
	return (sub);
}
