/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:28:00 by justine.lom       #+#    #+#             */
/*   Updated: 2026/11/20 10:48:10 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int		l;
	long	nb;

	if (n == 0)
		return (1);
	nb = n;
	l = 0;
	if (nb < 0)
	{
		l++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	len = ft_len(n);
	str = malloc(sizeof(char) * (len));
	if (!str)
	{
		return (NULL);
	}
	str[len] = '\0';
	len --;
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (len > -1 && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		len --;
		nb /= 10;
	}
	return (str);
}

// int main (int argc, char **argv)
// {
// 	if (argc < 2)
// 		return (0);
// 	printf("string 1: %s\n", ft_itoa(ft_atoi(argv[1])));
// 	return (0);
// }