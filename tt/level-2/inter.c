
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int		ft_if_match(char s1, char *s3)
{
	int n;

	n = 0;
	while (s3[n])
	{
		if (s3[n] == s1)
			return (1);
		n++;
	}
	//printf("%s\n", s3);
	s3[n] = s1;
	return (0);
}

int		main(int ac, char **av)
{
	char *s1;
	char *s2;
	int n;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	char s3[ft_strlen(av[1])];
	s1 = &av[1][0];
	s2 = &av[2][0];
	n = 0;
	while (*s1)
	{
		while (s2[n])
		{
			if (*s1 == s2[n] && !(ft_if_match(*s1, s3)))
			{
				write(1, &*s1, 1);
				write(1, "\n", 1);
			}
			n++;
		}
		s1++;
		n = 0;
	}
	return (0);
}
