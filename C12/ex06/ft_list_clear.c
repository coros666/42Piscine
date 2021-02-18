#include "../ft_list.h"

void	*free_fct(void *data)
{
	data = NULL;
	return (data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *temp;

	while (begin_list->next != 0)
	{
		temp = begin_list->next;
		free_fct((*begin_list).data);
		free(begin_list);
		begin_list = temp;
	}
}
