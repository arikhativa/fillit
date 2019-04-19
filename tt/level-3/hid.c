

#include <stdio.h>
#include <unistd.h>

int ft_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int s = 0;
	int b = 0;
	
	if (ac == 3)
	{
		if (!(ft_len(av[1])))
			write(1, "1", 1);
		else
		{
			while (av[2][b])
			{
				if (av[2][b] == av[1][s] && av[1][s])
					s++;
				b++;
			}
			(s == ft_len(av[1])) ? write(1, "1", 1) : write(1, "0", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
