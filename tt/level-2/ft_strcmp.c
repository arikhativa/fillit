
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	char s1[] = "12fg3";
	char s2[] = "1236346";

	printf("me %d\nhe %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	return (0);
}
