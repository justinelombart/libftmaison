/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:17:06 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/03 09:17:15 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return(1);
	return (0);
}

/*#include <stdio.h>

int main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	if (ft_isprint(argv[1][0]))
		printf("oui");
	else 
		printf("non");
	return(0);
	
}*/
