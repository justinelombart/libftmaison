/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlombart <jlombart@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:32:56 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/02 15:47:11 by jlombart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main(int argc, char** argv)
{
    if (argc != 2)
        return (0);
    if (ft_isdigit(argv[1][0]))
    {
        printf("ui");
        return(0);
    }
    else
    {
        printf("Nope");
        return(0);
    }
}*/
