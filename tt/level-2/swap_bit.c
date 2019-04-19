
#include <stdio.h>
#include <unistd.h>

unsigned char	swap(unsigned char c)
{
	unsigned char q;

	q = c;
	q = q << 4;
	c = c >> 4;
	c = c|q;

	return (c);
}

int main()
{
	unsigned char c = 'z';
	
	printf("%x\n", c);
	printf("%x\n", swap(c));
	return (0);
}
