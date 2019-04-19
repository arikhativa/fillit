
#include <stdlib.h>
#include <stdio.h>



int	*ft_malloc(char *s1)
{
	int nbr;
	int n = 1;
	int i = 0;
	int *s2;

	nbr = atoi(s1);
	if (nbr/2 > 1)
		n = nbr/2;
	if (!(s2 = (int*)malloc(sizeof(int) * (n))))
		return (NULL);
	n = 1;
	while (n <= (nbr/2))
	{
		if (nbr % n == 0)
		{
			s2[i] = n;
			i++;
		}
		n++;
	}
	s2[i] = 0;
	return (s2);
}

int main(int ac, char **av)
{
	int c = 0;
	int a = 0;
	int b = 0;
	int num = 0;
	int *s1;
	int *s2;

	if (ac == 3)
	{
		s1 = ft_malloc(av[1]);
		s2 = ft_malloc(av[2]);
		while (s1[a])
		{
			while (s2[b])
			{
				if (s2[b] == s1[a] && s2[b] > num)
					num = s2[b];
				b++;
			}
			b = 0;
			a++;
		}
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
