
#include <stdio.h>

char *ft_strrev(char *str)
{
	int e = 0;
	int s = 0;
	char swap;

	while (str[e + 1])
		e++;
	while (s < e)
	{
		swap = str[s];
		str[s] = str[e];
		str[e] = swap;
		s++;
		e--;
	}
	return (str);
}


int main()
{
	char s1[] = "123456";
	char *s2;
	printf("before %s\n", s1);
	s2 = ft_strrev(s1);
	printf("after %s\n", s1);
	return (0);
}

