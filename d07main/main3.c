
#include <stdio.h>
#include <stdlib.h>

char *ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	char *str;

	str = ft_concat_params(argc,argv);
	printf("%s", str);

	return (0);
}
