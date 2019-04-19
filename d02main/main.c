#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


//void	ft_print_alphabet(void);
//void	ft_print_reverse_alphabet(void);
//void	ft_print_numbers();
//void ft_is_negative(int n); int a = 99999; int b = -7777; int c = 0; int d = 'd';i
//void ft_print_comb();
//void ft_print_comb2();
void ft_putnbr(int nb); int a = 4002; int b = -2147483648; int c = 0; int d = 2147483647;


int main()
{
	
	//ft_print_alphabet();
	//ft_print_reverse_alphabet();
	//ft_print_numbers();
	//ft_is_negative(a); printf("\n"); ft_is_negative(b); printf("\n"); ft_is_negative(c); printf("\n"); ft_is_negative(d);
	//ft_print_comb();
	//ft_print_comb2();
	ft_putnbr(a); printf("\n"); ft_putnbr(b); printf("\n"); ft_putnbr(c); printf("\n"); ft_putnbr(d);

	return(0);
}

