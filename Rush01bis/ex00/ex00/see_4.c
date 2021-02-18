int		see_4(char **tab, int  n)
{
	int		line;
	int		col;
	int		dim;

	i = 4;
	if (n < 7)
	{
		col = n / 2;
		line = 0;
		while (line < 4)
		{
			if (tab[line][col] != (line + 1 + '0') && tab[line][col] != '0')
				return (0);
			tab[line][col] = line + 1 + '0';
			line++;
		}
	}
	else if (n < 15)
	{
		col = (n - 8) / 2;
		line = 3;
		while(line > -1)
		{
			if (tab[line][col] != (dim - line + '0') && tab[line][col] != '0')
				return (0);
			tab[line][col] = dim - line + '0';
			line--;
		}
		n += 2;
		col++;
	}
	else if (n < 23)
	{
		line = (n - 16) / 2;
		col = 0;
		while (col < 4)
		{
			if (tab[line][col] != (col + 1 + '0') && tab[line][col] != '0')
				return (0);
			tab[line][col] = col + 1 + '0';
			col++;
		}
	}
	else
	{
		line = (n - 24) / 2;
		col = 3;
		while (col > -1)
		{
			if (tab[line][col] != (dim - col + '0') && tab[line][col] != '0')
				return (0);
			tab[line][col] = dim - col + '0';
			col--;
		}
	}
	return (1);
}
