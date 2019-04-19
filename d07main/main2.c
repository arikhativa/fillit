
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int		ft_ultimate_range(int **range, int min, int max);

int main()
{
	int **range;
	int min = 50;
	int max = 55;
	int s;
	int i;

	s = 0;
	i = ft_ultimate_range(range, min, max);
	printf("%d\n\n", i);

	while (s < i)
	{
		printf("%d   ", range[0][s]);
		if ((s + 1) % 5 == 0)
			printf("\n");
		s++;
	}

	return (0);
}
