/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:06:40 by coros             #+#    #+#             */
/*   Updated: 2021/02/02 17:35:07 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_isspace(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\r' 
			|| str[i] == '\f' || str[i] == '\t' 
			|| str[i] == '\v')
		i++;
	return (i);
}

int ft_atoi(char *str)
{
	int i;
	int n;
	int signe;

	i = ft_isspace(str);
	signe = 1;
	n = 0;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signe *= (-1);
	if (!(str[i] >= '0' && str[i] <= '9'))
		signe = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (signe * n);
}

int test_entree(char **argv)
{
	if ((!(argv[2][0] == '+' || argv[2][0] == '-'
		|| argv[2][0] == '/' || argv[2][0] == '*'
		|| argv[2][0] == '%')) || (!(argv[2][1] == '\0')))
	{
		ft_putstr("0\n");
		return (0);
	}
	if (ft_atoi(argv[3]) == 0)
	{
		if (argv[2][0] == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		if (argv[2][0] == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
	}
	return (1);
}

int		ft_do_op(int n1, int n2, char a)
{
	if (a == '+')
		return (n1 + n2);
	else if (a == '-')
		return (n1 - n2);
	else if (a == '*')
		return (n1 * n2);
	else if (a == '/')
		return (n1 / n2);
	else if (a == '%')
		return (n1 % n2);
	return (0);
}

void	ft_putnbr(int nb)
{
	int n;
	char a;

	if (nb < 0)
	{
		ft_putstr("-");
		n = -nb;
	}
	else
		n = nb;
	while (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	a = (n % 10 + 48);
	write(1, &a, 1);
}
