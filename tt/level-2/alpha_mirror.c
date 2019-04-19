
#include <unistd.h>

char ft_swich(char c)
{
	int n = 0;
	char s1[] = "abcdefghijklmnopqrstuvwxyz";

	
	while (s1[n])
	{
		if (s1[n] == c)
		{
			c = s1[25 - n];
			return (c);
		}
		n++;
	}
	return (c);
}

void	ft_alfmir(char *str)
{
	int n = 0;
	char c;

	while (str[n])
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			c = (ft_swich(str[n] + 32)) - 32;
			write(1, &c, 1);
		}
		else if (str[n] >= 'a' && str[n] <= 'z')
		{
			c = ft_swich(str[n]);
			write(1, &c, 1);
		}
		else
			write(1, &str[n], 1);
		n++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		ft_alfmir(av[1]);
	write(1, "\n",1);
	return(0);
}
