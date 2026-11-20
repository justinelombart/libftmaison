/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justine.lombart <justine.lombart@leader    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:00:58 by justine.lom       #+#    #+#             */
/*   Updated: 2026/11/20 11:27:34 by justine.lom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*In Unix type systems, a file descriptor ( fd for short) is a small positive integer
 used as reference to an open file in a process. A process, as we’ve seen in a previous
 article about processes, is a currently running program.
 0	Standard Input	STDIN_FILENO	stdin
1	Standard Output	STDOUT_FILENO	stdout
2	Standard Error	STDERR_FILENO	stderr
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
