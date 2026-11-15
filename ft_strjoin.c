/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:28:07 by justine.lom       #+#    #+#             */
/*   Updated: 2026/11/13 11:36:07 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*join;
	int		l_s1;
	int		l_s2;

	if (!s1 || !s2)
		return (NULL);
	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	len = l_s1 + l_s2 + 1;
	join = malloc(sizeof(char) * len);
	if (!len)
		return (NULL);
	ft_strlcpy(join, s1, l_s1 + 1);
	ft_strlcat(join, s2, len +1);
	join[len] = '\0';
	return (join);
}
