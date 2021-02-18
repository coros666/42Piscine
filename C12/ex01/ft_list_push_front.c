#include "../ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem0;
	t_list *temp;

	if (!(elem0 = ft_create_elem(data)))
		return ;
	temp = *begin_list;
	*begin_list = elem0;
	elem0->next = temp;
}
