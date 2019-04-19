
#include <stdio.h>
#include <stdlib.h>


int	ft_space(char *str, int n)
{
	while (str[n] == ' ')
		n++;
	return (n);
}

int is_base(char c, int base)
{
	char bb[] = "12345689abcdef";

	while (base > 0)
	{
		if (c == bb[base])
				return (1);
		base--;
	}
	return (0);
}

int ft_10(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (0);
}

int ft_base(char *str, int base)
{
	int res = 0;
	int n = 0;
	int nega = 1;
	
	n = ft_space(str, n);
	if (str[n] == '-')
	{
		nega = -1;
		n++;
	}
	while (is_base(str[n], base))
	{
		res = (res * 10) + ft_10(str[n]);
		n++;
	}
	return (res * nega);
}



int main (int ac, char **av)
{
	int c = atoi(av[2]);

	printf("%d\n", ft_base(av[1], c));
	return (0);
}
