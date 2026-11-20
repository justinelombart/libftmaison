/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:21:11 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 11:59:26 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		l;
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
			while (big[i + l] == little[l]
				&& big[i + l] && little[l]
				&& (i + l) < len)
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
