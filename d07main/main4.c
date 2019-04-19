#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int main()
{
	char **mstr;
	int s;
	char s2[6] = {' ','4',' ',' ','2','\0'};

	s = 0;
	mstr = ft_split_whitespaces(s2);
	printf("%s\n", mstr[1]);
	while (s < 3)
	{
		printf("%s\n", mstr[s]);
		s++;
	}

	return (0);
}

