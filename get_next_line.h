/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 11:29:46 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/14 11:17:08 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 69
# define EOL '\n'
# include "libft.h"
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <stdio.h>

typedef struct		s_line
{
	int				fd;
	char			*line;
	struct s_line	*next;
}					t_line;

int					get_next_line(const int fd, char **line);

#endif
