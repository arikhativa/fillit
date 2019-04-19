
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list(t_list *begin)
{
	int i;

	i = 0;
	while (begin)
	{
		begin = begin->next;
		i++;
	}
	return (i);
}

int main()
{
	t_list one;
	t_list *ptr1;
	t_list two;

	one.next = NULL;
	two.next = &one;
	ptr1 = &two;
	printf("%d\n", ft_list(ptr1));
	return (0);
}

