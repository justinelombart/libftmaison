/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:28:20 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 12:01:39 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const	*str1;
	unsigned char const	*str2;
	size_t				i;

	i = 0;
	if (!s1 || !s2 || n == 0)
		return (0);
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i - 1] - str2[i - 1]);
}
