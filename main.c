/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 12:59:22 by kwiessle          #+#    #+#             */
/*   Updated: 2016/04/13 19:24:10 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	*line;

	fd = open(av[1], O_RDONLY);
	line = NULL;
	while ((ret = get_next_line(fd, &line) > 0))
		printf("%s| -> %d\n", line, ret);
	printf("%s| -> %d\n", line, ret);

	return (0);
}
