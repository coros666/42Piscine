/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:34:32 by coros             #+#    #+#             */
/*   Updated: 2021/02/03 07:34:40 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapstr(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[++i])
	{
		if (cmp(tab[i - 1], tab[i]) > 0)
			ft_swapstr(&tab[i - 1], &tab[i]);
	}
	tab[i] = 0;
}
