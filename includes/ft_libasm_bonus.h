/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libasm_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturquin <mturquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:42:27 by mturquin          #+#    #+#             */
/*   Updated: 2021/02/23 19:38:43 by mturquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBASM_BONUS_H
# define FT_LIBASM_BONUS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct  s_list
{
    void            *data;
    struct s_list   *next;
}               t_list;

t_list	*ft_lstnew(void *content);
int     ft_list_size(t_list *begin_list);


#endif