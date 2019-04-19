
#include <stdio.h>
#include <unistd.h>

void	ft(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

void me(unsigned char o)
{
	int i = 7;

	while (i >= 0)
	{
		((o >> i) & 1) ? write(1, "1", 1) : write(1, "0", 1);
		i--;
	}
}

int main()
{
	unsigned char c = ' ';

	printf("ft:\n");
	ft(c);
	printf("\nme:\n");
	me(c);
	return (0);
}
