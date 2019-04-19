#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

//void ft_ft(int *nbr); int v = 1; int *a = &v;
//void ft_ultimate_ft(int *********nbr); int v = 1; int *a = &v; int **a2 = &a; int ***a3 = &a2; int ****a4 = &a3; int *****a5 = &a4; int ******a6 = &a5; int *******a7 = &a6; int ********a8 = &a7; int *********a9 = &a8;
//void ft_swap(int *a, int *b); int v1 = 27; int v2 = -19; int *a = &v1; int *b = &v2;
//void ft_div_mod(int a, int b, int *div, int *mod); int a = 12; int b = 3; int res_div; int res_mod; int *ptr_div = &res_div; int *ptr_mod = &res_mod;
//int ft_ultimate_div_mod(int *a, int *b); int a = 11; int b = 4; int *ptr_a = &a; int *ptr_b = &b;
//void ft_putstr(char *str); char *str = "ineedhope"; 
//int ft_strlen(char *str); char *str = "hoyype";
//char *ft_strrev(char *str); char rts[] = "eeeeepoh"; 
//int ft_atoi(char *str); char str1[] = "      -42"; char str2[] = "    +42"; char str3[] = "   -123 4"; 
void ft_sort_integer_table(int *tab, int size); int tab[8] = {1, 9, 2, 4, 4, 9, 9, 7};


int main()
{
	//printf("%d\n", v); ft_ft(a); printf("%d", v);
	//printf("%d\n", v); ft_ultimate_ft(a9); printf("%d", v);
	//printf("v1 is %d, and v2 is %d\n", v1, v2); ft_swap(a, b); printf("v1 is %d, and v2 is %d", v1, v2);
	//ft_div_mod(a, b, ptr_div, ptr_mod); printf("ptr_div is %d\nptr_mod is %d", res_div, res_mod);
	//printf("a is %d\nb is %d\n\n", a, b); ft_ultimate_div_mod(ptr_a, ptr_b); printf("*a is %d\n*b is %d", a, b);
	//ft_putstr(str);
	//printf("%d",ft_strlen(str));
	//ft_strrev(rts); for(int i = 0; i < 8 ; i++) {printf("%c",rts[i]);}
	//printf("atoi:  %d\nme:    %d\n", atoi(str1), ft_atoi(str1)); printf("atoi:  %d\nme:    %d\n", atoi(str2), ft_atoi(str2)); printf("atoi:  %d\nme:    %d", atoi(str3), ft_atoi(str3));

	ft_sort_integer_table(tab, 8); for(int i = 0 ; i < 8 ; i++) {printf("%d", tab[i]);}



	return(0);
}

