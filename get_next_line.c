/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:10:07 by rgodtsch          #+#    #+#             */
/*   Updated: 2022/12/02 16:15:07 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char 		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	stash = gnl_read(fd, stash);
	if (!stash)
		return (NULL);
	line = gnl_get_line(stash);
	stash = gnl_rm_old_line(stash);
	return (line);

	
}

char	*gnl_read(int fd, char *res)
{
	ssize_t	bytes_readed;
	char	*buffer;


}
