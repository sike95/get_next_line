/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmpofu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:04:45 by mmpofu            #+#    #+#             */
/*   Updated: 2017/09/13 18:33:32 by mmpofu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
# define BUFF_SIZE 32

int		get_next_line(const int fd, char **line);




#endif
