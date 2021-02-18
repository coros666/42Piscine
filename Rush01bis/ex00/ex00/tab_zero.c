char	**tab_zero(char **tab)
{
	int		i;
	int		j;

	while (i < 4)
	{
		while (j < 4)
		{
			tab[i][j] = '0';
		}
	}
	return (tab);
}
