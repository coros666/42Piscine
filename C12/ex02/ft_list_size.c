#include "../ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int	i;

	i = 1;
	while (begin_list->next != 0)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
