void	see_2_1(char **tab, int n)
{
	int		col;
		
	col = n / 2;
	if (tab[2][col] == '4')
	{
		if (tab[0][col] == '2')
		{
			tab[1][col] = '1';
			tab[3][col] = '3';
		}
		if (tab[1][col] == '2')
		{
			tab[0][col] = '3';
			tab[3][col] = '1';
		}	
		if (tab[3][col] == '2')
		{
			tab[0][col] = '3';
			tab[1][col] = '1'; 
		}
	}
	if (tab[3][col] == '4')
	{
		tab [0][col] = '3';
		if tab[1][col] = '2'
			tab[2][col] = '1';
		else if tab[1][col] = '1'
			tab[2][col] = '2';
	}
}

int		see_2(char **tab,int  n)
{
	int		line;
	int		col;
	
	if (n < 7)
	{
		see_2_1(tab, n);
	}
	else if (n < 15)
	{
		col = (n - 8) / 2;
		if (tab[1][col] == '4')
		{
			if (tab[3][col] == '2')
			{
				tab[2][col] = '1';
				tab[0][col] = '3';
			}
			if (tab[2][col] = '2')
			{
				tab[3][col] = '3';
				tab[0][col] = '1';
			}
			if (tab[0][col] == '2')
			{
				tab[3][col] = '3';
				tab[2][col] = '1';
			}
		}
		if (tab[0][col] == '4')
		{
			tab [3][col] = '3';
			if tab[2][col] = '2'
				tab[1][col] = '1';
			else if tab[2][col] = '1'
				tab[1][col] = '2';
		}
	}
	if (n > 15 && n < 23)
	{
		line = n / 2;
		if (tab[line][2] == '4')
		{
			if (tab[line][0] == '2')
			{
				tab[line][1] = '1';
				tab[line][3] = '3';
			}
			if (tab[line][1] == '2')
			{
				tab[line][0] = '3';
				tab[line][3] = '1';
			}
			if (tab[line][3] == '2')
			{
				tab[line][0] = '3';
				tab[line][1] = '1'; 
			}
		}
		if (tab[line][3] == '4')
		{
			tab [line][0] = '3';
			if tab[line][1] = '2'
				tab[line][2] = '1';
			else if tab[line][1] = '1'
				tab[line][2] = '2';
		}
	}
	else if (n > 23 && n < 31)
	{
		line = (n - 8) / 2;
		if (tab[line][1] == '4')
		{
			if (tab[line][3] == '2')
			{
				tab[line][2] = '1';
				tab[line][0] = '3';
			}
			if (tab[line][2] = '2')
			{
				tab[line][3] = '3';
				tab[line][0] = '1';
			}
			if (tab[line][0] == '2')
			{
				tab[line][3] = '3';
				tab[line][2] = '1';
			}
		}
		if (tab[line][0] == '4')
		{
			tab [line][3] = '3';
			if tab[line][2] = '2'
				tab[line][1] = '1';
			else if tab[line][2] = '1'
				tab[line][1] = '2';
		}
	}
}	
