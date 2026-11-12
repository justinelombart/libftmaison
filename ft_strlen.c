/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:17:26 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:17:29 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_strlen(const char* str)
{
	int	i; 
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	printf("%d", ft_strlen(argv[1]));
	return (0);
}*/