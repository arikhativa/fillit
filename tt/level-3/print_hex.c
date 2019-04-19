
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int n = 1;
	int a = 0;

	while (str[i] == ' ' || (str[n] > 9 && str[n] < 13))
		i++;
	if (str[i] == '-')
	{
	   	n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] == '-' || str[i] == '+')
	   return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (n * a);
}

void ft(int nbr)
{
	if ((nbr / 16) > 0)
		ft(nbr / 16);
	nbr = nbr % 16;
	nbr += nbr > 9 ? 'a' - 10 : '0';
	write(1, &nbr, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
