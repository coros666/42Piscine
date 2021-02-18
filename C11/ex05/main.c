/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:06:36 by coros             #+#    #+#             */
/*   Updated: 2021/02/02 17:15:18 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
	int n1;
	int n2;
	int result;

	if (argc != 4)
		return (0);
	if(!test_entree(argv))
		return(0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	result = ft_do_op(n1, n2, argv[2][0]);
	ft_putnbr(result);
	ft_putstr("\n");
	return (0);
}
