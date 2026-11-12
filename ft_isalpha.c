/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:02:54 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/02 15:48:00 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main(int argc, char** argv)
{
	if (argc != 1)
		return (0);

	if (ft_isalpha(argv[1][0]))
	{
		printf("oui");
		return(0);
	}
	else 
	{
		printf("non");
		return(0);
	}
}*/
