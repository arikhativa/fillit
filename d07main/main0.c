
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


char	*ft_strdup(char *src);

int main()
{
	char src[] = "";
	char *mstr;
	int i;

	i = 0;
	mstr = ft_strdup(src);
	printf("%p\n", mstr);
	return (0);
}
