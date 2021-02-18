#include "ft_putnbr.c"
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int	main(void)
{
	//int a;
	//int b = 3;
	/*ft_putnbr(a); ft_putnbr(b); ft_putnbr(div); ft_putnbr(mod);*/
	int tab[5];
	int	i; 
	tab[0] = 58; tab[1] = 6; tab[2]= 10; tab[3] = 60; tab[4] = 0;

	ft_sort_int_tab(tab, 5);
	for (i = 0; i < 5; i++)
	{
		ft_putnbr(tab[i]);
	}
//	ft_putchar("\n");
	/*ft_putnbr(a);ft_putnbr(b); *ft_putnbr(div); ft_putnbr(mod);*/
}
