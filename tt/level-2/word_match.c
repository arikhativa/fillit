
#include <unistd.h>
#include <stdio.h>

int ft_strlencmp(char *s1, char *s3)
{
	int i = 0;
	int n = 0;

		//printf("s1 is %s\ns3 is %s\n", s1, s3);
	while (s1[i])
		i++;
	while (s3[n])
		n++;
	if (i == n)
		return (1);
	return (0);
}


int ft_s3(char *s1, char *s2, int n)
{
	char s3[n + 1];
	int i;

	i = 0;
	while (*s2)
	{
		if (s1[i] == *s2)
		{
			s3[i] = s1[i];
			i++;
		}
		s2++;
	}
	s3[i] = '\0';
	if (ft_strlencmp(s1, s3))
		return (1);
	return (0);	
}

int main (int ac, char **av)
{
	int n;

	n = 0;
	if (ac == 3)
	{
		while (av[1][n])
			n++;
		if (ft_s3(av[1], av[2], n))
		{
			n = 0;
			while (av[1][n])
			{
				write(1, &av[1][n], 1);
				n++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
