
void	fourth_value(char	**tab)
{
	int 	line;
	int		col;
	int 	count;
	int		sum;
	int		position;
	int		a;
	
	a = 0;
	line = 0;
	col = 0;
	while (col < 4)
	{
		count = 0;
		sum = 0;
		while (line < 4)
		{
			if (tab[line][col] != '0')
			{
				count++;
				sum += tab[line][col] - '0';
			}
			else
			{
				position = line;	
			}
			line++;
		}
		if (count == 3)
		{	
			a = 1;
			tab[position][col] = 10 - sum + '0';
		}
		col++;
	}
	line = 0;
	col = 0;
	while (line < 4)
	{
		count = 0;
		sum = 0;
		while (col < 4)
		{
			if (tab[line][col] != '0')
			{
				count++;
				sum += tab[line][col] - '0';
			}
			else
			{
				position = col;	
			}
			col++;
		}
		if (count == 3)
		{	
			a = 1;
			tab[line][position] = 10 - sum + '0';
		}
		line++;
	}
	a ? fourth_value(tab) : return ();
}
