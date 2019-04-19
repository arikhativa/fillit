#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

//int ft_iterative_factorial(int nb);
//int ft_recursive_factorial(int nb);
//int ft_iterative_power(int nb, int power);
//int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
//int ft_sqrt(int nb);
//int ft_is_prime(int nb);
//int ft_find_next_prime(int nb);


int main()
{
	//printf("7! is %d\n1! is %d\n-5! is %d\n10! is %d", ft_iterative_factorial(7), ft_iterative_factorial(1), ft_iterative_factorial(-5), ft_iterative_factorial(12));
//	printf("5! is %d\n-4! is %d\n0! is %d\n11! is %d", ft_recursive_factorial(5), ft_recursive_factorial(-4), ft_recursive_factorial(0), ft_recursive_factorial(13));	
	//printf("7^4 is %d\n73^5 is %d\n-4^5 is %d\n5^0 is %d",ft_iterative_power(7, 4), ft_iterative_power(56, 31), ft_iterative_power(-4, 5), ft_iterative_power(5, 0));
//	printf("7^4 is %d\n73^5 is %d\n1^0 is %d\n0^5 is %d",ft_recursive_power(7, 4), ft_recursive_power(73, 5), ft_recursive_power(1, 0), ft_recursive_power(0, 5));
	printf("the 0 number is %d\nthe -6th number is %d\nthe 30th number is %d", ft_fibonacci(0), ft_fibonacci(-6), ft_fibonacci(30));
	//printf("4 is now %d\n81 is now %d\n-7 is now %d\n2147395600 is now %d", ft_sqrt(4), ft_sqrt(81), ft_sqrt(-7), ft_sqrt(2147395600));
	//printf("2147483647 is %d\n2 is %d\n7005 is %d", ft_is_prime(2147483647), ft_is_prime(2), ft_is_prime(7005));
	//printf("1640817049 is now %d\n1000 is now %d\n0 is now %d", ft_find_next_prime(1640817049), ft_find_next_prime(1000), ft_find_next_prime(0));


return(0);
}

