/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:07:24 by coros             #+#    #+#             */
/*   Updated: 2021/02/02 17:14:52 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>

void ft_putnbr(int nb);
void ft_putstr(char *str);
int ft_do_op(int n1, int n2, char a);
int test_entree(char **argv);
int ft_isspace(char *str);
int ft_atoi(char *str);
#endif
