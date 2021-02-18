int 	see_1(char **tab, int n)
{	
	if (n < 7)
	{
		if (tab[0][n / 2] != '4' && tab[0][n / 2] != '0')
			return (0);
		tab[0][n / 2] = '4';
	}	
	else if (n < 15)
	{
		if (tab[3][(n - 8) / 2] != '4' && tab[3][(n - 8) / 2] != '0')
			return (0);
		tab[3][(n - 8) / 2] = '4';
	}
	if (n < 23)
	{
		if (tab[(n - 16) / 2][0] != '4' && tab[(n - 16) / 2][0] != '0')
			return (0);
		tab[(n - 16) / 2][0] = '4';
	}
	else
	{
		if (tab[(n - 24) / 2][3] != '4' && tab[(n - 24) / 2][3] != '0')
			return (0);
		tab[(n - 24) / 2][3] = '4';
	}
	return (1);
}
