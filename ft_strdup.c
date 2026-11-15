/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:23:30 by jlombart          #+#    #+#             */
/*   Updated: 2026/11/13 00:16:34 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *src)
{
    int len;
    char *dup;
    
    if (!src)
        return (NULL);
    len = ft_strlen(src) + 1;
    dup = malloc (sizeof (char) * len);
    if (!dup)
        return (NULL);
    ft_strlcpy(dup, src, len);
    return (dup);
}

// int iTest = 1;
// int main(void)
// {
// 	signal(SIGSEGV, sigsegv);
// 	title("ft_strdup\t: ")

// 	char * s = ft_strdup((char*)"coucou");
// 	/* 1 */ check(!strcmp(s, "coucou"));
// 	/* 2 */ mcheck(s, strlen("coucou") + 1); free(s); showLeaks();
	
// 	s = ft_strdup((char*)"");
// 	/* 3 */ check(!strcmp(s, ""));
// 	/* 4 */ mcheck(s, 1); free(s); showLeaks();
// 	write(1, "\n", 1);
// 	return (0);
// }