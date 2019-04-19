
#include <stdio.h>
#include <unistd.h>

int main (int ac, char **av)
{
	char str[1000];
	int n = 0;
	int i = 0;

	if (ac == 2 && av[1])
	{
		while (av[1][n])
		{
			if (av[1][n] == ' ' || av[1][n] == '\t')
			{
				while (av[1][n] == ' ' || av[1][n] == '\t')
					n++;
				str[i] = ' ';
				i++;
			}
			str[i] = av[1][n];
			i++;
			n++;
		}
		str[i] = '\0';
		write (1, str, i);
	}
	write(1, "\n",1);
	return (0);
}

