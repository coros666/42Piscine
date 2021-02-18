/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:37:30 by coros             #+#    #+#             */
/*   Updated: 2021/02/02 09:47:06 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*retour;
	int i;

	i = 0;
	retour = malloc(sizeof(int) * length);
	while (i < length && tab[i])
	{
		retour[i] = f(tab[i]);
		i++;
	}
	return (retour);
}
