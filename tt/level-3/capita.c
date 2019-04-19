

#include <unistd.h>
#include <stdio.h>


#define SPACE str[n] == ' ' || str[n] == '\t'
#define LTR str[n] != ' ' && str[n] != '\t' && str[n] != '\0'

void ft_lowcase(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] += 32;
		n++;
	}
}

void	ft_upcase(char *str)
{
	int n = 0;
	while (str[n])
	{
		while (SPACE)
			n++;
		while (LTR)
			n++;
		if (SPACE || str[n] == '\0')
			str[n - 1] -= 32;
	}
}

void ft_print(char *str)
{
	int n = 0;

	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	int s = 1;

	while (av[s])
	{
		ft_lowcase(av[s]);
		s++;
	}
	s = 1;
	while (av[s])
	{
		ft_upcase(av[s]);
		s++;
	}
	s = 1;
	while (av[s])
	{
		ft_print(av[s]);
		s++;
	}
	return (0);
}
