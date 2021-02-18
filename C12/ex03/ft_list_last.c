/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 08:04:18 by coros             #+#    #+#             */
/*   Updated: 2021/02/04 14:12:25 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next != 0)
		begin_list = begin_list->next;
	return (begin_list);
}
