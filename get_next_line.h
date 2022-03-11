/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogrkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 11:57:44 by gogrkovi          #+#    #+#             */
/*   Updated: 2018/12/18 16:58:06 by gogrkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/includes/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

# define BUFF_SIZE 4096

int			get_next_line(const int fd, char **line);

#endif
