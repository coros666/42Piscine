int		main(int argc, char **argv)
{
	char	**tab;
	int		n;

	if (!arg_is_valid(argc, argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	tab =  malloc (16);
	tab = tab_zero(char **tab);
	n = 0;
	col = 0;
/*premier parcours de argv[1] pour placer solutions evidentes et detecter erreurs evidentes */
	while (argv[1][n])
	{
/*on place les cas 4 puis 1 en differenciant les cas lignes/colonnes dans les fct see_* */
		if (argv[1][n] == '4')
		{
			if (!see_4(tab, n))
				putstr("Error\n");
				return (0);
		}
		if (argv[1][n] == '1')
		{
			if (!see_1(tab, n))
				putstr("Error\n");
			return (0);
		}
	n += 2;
	}
/*essayer de remplir par lignes et colonnes sachant qu'il faut cha chiffre une fois*/
	fourth_value(tab);
/*chercher les solutions restantes */
	n = 0;
	while (argv[1][n])
	{
		if (argv[1][n] == '3')
		{
			see_3(tab, n);
		}
	}
	ft_sudoku(tab);
	while (argv[1][n])
	{
		if (argv[1][n] == '2')
		{
			see_2(tab, n);
		}
		n += 2;
	}
	fourth_value(tab);

	free (tab);
	return (0);
}
