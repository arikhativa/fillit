
#include <stdio.h>
#include <unistd.h>

unsigned char	rev(unsigned char c)
{
	unsigned char q = 0;
	int n = 0;
	

	while (n <= 7)
	{
		q = q | ((c >> n) & 1);
		q = (q << 1);
		n++;
	}

	return (q);
}

int main()
{
	unsigned char c = '&';
	
	//rev(c);	
	printf("%x\n", c);
	printf("%x\n", 'd');
	return (0);
}
