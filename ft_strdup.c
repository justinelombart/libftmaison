/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:23:30 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/20 18:41:49 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dup;

	if (!src)
		return (NULL);
	len = ft_strlen(src) + 1;
	dup = malloc (sizeof (char) * len);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, src, len);
	return (dup);
}
