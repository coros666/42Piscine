/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:24:10 by coros             #+#    #+#             */
/*   Updated: 2021/02/04 15:24:11 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *origin;
	t_list *elem;

	origin = *begin_list;
	if (!(elem = ft_create_elem(data)))
		return ;
	while ((*begin_list)->next != 0)
	{
		*begin_list = (*begin_list)->next;
	}
	(*begin_list)->next = elem;
	begin_list = &origin;
}
