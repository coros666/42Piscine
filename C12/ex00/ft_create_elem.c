/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:03:53 by coros             #+#    #+#             */
/*   Updated: 2021/02/03 10:09:45 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem1;

	if(!(elem1 = malloc(sizeof(t_list))))
		return (0);
	elem1->data = data;
	elem1->next = 0;
	return (elem1);
}

