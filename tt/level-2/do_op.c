
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_calc(int nbr1, char c, int nbr2)
{
	if (c == '+')
		nbr1 = nbr1 + nbr2;
	else if (c == '-')
		nbr1 = nbr1 - nbr2;
	else if (c == '*')
		nbr1 = nbr1 * nbr2;
	else if (c == '/')
		nbr1 = nbr1 / nbr2;
	else if (c == '%')
		nbr1 = nbr1 % nbr2;
	return (nbr1);
}

int		main(int ac, char **av)
{
	int nbr1;
	int nbr2;

	if (ac == 4)
	{
		nbr1 = atoi(av[1]);
		nbr2 = atoi(av[3]);
		printf("%d\n", ft_calc(nbr1, av[2][0], nbr2));
	}
	else
		write(1, "\n", 1);
	return (0);
}
