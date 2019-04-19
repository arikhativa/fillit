
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int		*ft_range(int min, int max);

int main()
{
	int min = -1;
	int max = 1;
	int *ari;
	int i = 0;

	ari = ft_range(min, max);
	while ((min + i) < max)
	{
		printf("%d\t", ari[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
		i++;
	}
	return (0);
}
