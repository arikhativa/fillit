#include <stdio.h>

int me(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

/*int ft_2(unsigned int n)
{
	unsigned int i;
	unsigned int t;

	i = 1;
	t = 2;
	while (i < (n/2))
	{
		if ((t * 2) == n)
			return (1);
		t = t * 2;
		i++;
	}
	return (0);
}*/

int		is(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0) 
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int main()
{
	unsigned int nm = 2147483648;

	if (is(nm))
		printf("he yes\n");
	else
		printf("he no\n");

	if (me(nm))
		printf("me yes\n");
	else
		printf("me no\n");

	return (0);
}
