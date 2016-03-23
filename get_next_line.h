/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 19:12:25 by kwiessle          #+#    #+#             */
/*   Updated: 2016/03/23 19:19:22 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/types.h>

# define BUFF_SIZE 22
# define MAX_FD 256
# define EOL '\n'

int		get_next_line(const int fd, char **line);

#endif
