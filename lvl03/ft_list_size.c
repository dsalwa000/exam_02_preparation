
#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
	int	length;
	
	length = 0;
	while (begin_list)
	{
		length++;
		begin_list = begin_list->next;
	}
	return (length);
}
