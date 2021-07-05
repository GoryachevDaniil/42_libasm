/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libasm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturquin <mturquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:16:37 by mturquin          #+#    #+#             */
/*   Updated: 2021/02/23 18:18:07 by mturquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBASM_H
# define FT_LIBASM_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t  ft_strlen(char *s);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strcpy(char *s1, const char *s2);
char    *ft_strdup(const char *s);
ssize_t ft_read(int fd, void *buf, unsigned count);
ssize_t ft_write(int handle, void *buf, int count);

#endif