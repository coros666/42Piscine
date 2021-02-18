int		arg_is_valid(int argc, char *str)
{
	int		i;

	i = 0;
	if (argc != 2)
		return (0);
	while (str[i])
	{
		if (((i % 2) == 0) && ((str[i] < '1') || (str[i] > '4')))
			return (0);
		if ((i % 2 == 1) && (str[i] != ' '))
			return (0);
		if (i > 30)
			return (0);
		if (((i < 7) || (i > 15)) && (str[i] == '4' && str[i + 8] != 1))
			return (0);
		if (((i < 7) || (i > 15)) && (str[i] == '3' && str[i + 8] == 3))
			return (0);
		i++;
	}
	if (i < 30)
		return (0);
	return (1);
}
