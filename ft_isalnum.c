/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:24:26 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/02 15:24:27 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	if (ft_isalnum(argv[1][0]))
		printf("ui");
	else
		printf("nope");
	return (0);
}*/
