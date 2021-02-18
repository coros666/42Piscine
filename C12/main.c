#include "./ft_list.h"

int main()
{	
	int i;
	t_list **begin_list;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	elem1 = ft_create_elem("data");
	elem2 = ft_create_elem("data1");
	elem3 = ft_create_elem("data2");
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = 0;
	begin_list = malloc(sizeof(t_list *) * 4);
	*begin_list = elem1;
	t_list *begon = *begin_list;
	/*while (*begin_list)
	{
		printf("%s\n", (*begin_list)->data);
		*begin_list = (*begin_list)->next;
	}
	printf("Fin1\n");
	ft_list_push_front(begin_list, "dati");
	begin_list = &begon;
	while ((*begin_list))
	{
		printf("%s\n", (*begin_list)->data);
		*begin_list = (*begin_list)->next;
	}
	printf("Fin2\n");
	//(i = ((*begin_list)->next)->data == 0 ? 1 : 0);
	//printf("%d\n",i);
	printf("%d\n", ft_list_size(*begin_list));
//	printf("%s", (ft_list_last(*begin_list))->data);
//	ft_list_clear(*begin_list, free_fct);
//	(i = ((*begin_list)->next)->data == 0 ? 1 : 0);
//	printf("%d\n",i);*/
	ft_list_push_back(begin_list, "dato");
	begin_list = &begon;
	while (*begin_list)
	{
		printf("%s\n", (*begin_list)->data);
		*begin_list = (*begin_list)->next;
	}
}
