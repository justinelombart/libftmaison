/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:18:19 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:18:20 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>
void ft_bzero(void *p, size_t n)
{
	size_t	i;
	unsigned char *ptr;

	ptr = p;
	i = 0;
	while (n > 0)
	{
		ptr[i] = '\0';
		n--;
		i++;
	}
}
