
#include <stdio.h>
#include <unistd.h>

int	ft_check(char *str)
{
	char space[2] = {' ', '\t'};
	int n;
	int i;
	int last;

	n = 0;
	i = 0;
	last = 0;
	while (str[n])
	{
		while (space[i])
		{
			if (str[n] == space[i])
				last = (n + 1);
			i++;
		}
		n++;
		i = 0;
	}
	return (last);
}

int main(int ac, char **av)
{
	int n;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	n = ft_check(av[1]);
	while (av[1][n])
	{
		write(1, &av[1][n], 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}
