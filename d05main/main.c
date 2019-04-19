#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

//void ft_putstr(char *str); char str[] = "4235";
//void ft_putnbr(int nb); int str = 4235;
int ft_atoi(char *str); char str[] = "\f\f98"; int atoi(const char *);
//char *ft_strcpy(char *dest, char *src); char dest[12] = "ii"; char src[11] = "i need hope";
//char *ft_strncpy(char *dest, char *src, unsigned int n); int n = 1; char dest[5] = {'e', 'b', 'c'}; char src[4] = {'t', '2', '3'};
//char	*ft_strstr(char *str, char *to_find); char str[] = "mab cm aybc yhehfdgy"; char to_find[] = "abc"; char *hope;
//int	ft_strcmp(char *s1, char *s2); char s1[] = "1234"; char s2[] = "a23";
//int	ft_strncmp(char *s1, char *s2, unsigned int n); char s1[10] = {'a', 'i' , '3'}; char s2[5] = {'a', '2', '3', '4'}; unsigned int n = 2;
//char *ft_strupcase(char *str); char str[] = "abcdEE 4444 FF GGhij";
//char *ft_strlowcase(char *str); char str[] = "abcdEE 44[@4 FF GGhij";
//char *ft_strcapitalize(char *str); char str[] = "salut, 3comment+Tu VAS ? 42Mots quarante-deux; cinquante+et+un";
//int ft_str_is_alpha(char *str); char str[] = "dfhsdhsSHSFGHSFGHS f";
//int ft_str_is_numeric(char *str); char str[] = "";
//int ft_str_is_lowercase(char *str); char str[] = "";
//int ft_str_is_uppercase(char *str); char str[] = "";
//int ft_str_is_printable(char *str); char str[4] = {'\n' , '2', '@', '1'};
//char *ft_strcat(char *dest, char *src); char dest[4] = {'1', '2', '3'}; char src[2] = {'5', '6'};
//char *ft_strncat(char *dest, char *src, int nb); int nb = 3; char dest[10] = {'1', '2', '3'}; char src[5] = {'4' ,'5', '6', '7', '8'};
//char *ft_strncat(char *dest, char *src, int nb); unsigned int nb = 8; char dest[8] = {'1', 'b', 'c'}; char src[5] = {'4' ,'5', '6', 'y', 'u'};

int main()
{
	//ft_putstr(str);
	//ft_putnbr(str);
	printf("  me %d\natoi %d", ft_atoi(str), atoi(str));
	//ft_putstr(src); printf("\n"); ft_putstr(dest); printf("\n"); ft_strcpy(dest, src); ft_putstr(dest);
	//ft_putstr(src); printf("\n"); ft_putstr(dest); printf("\n"); strncpy(dest, src, n); ft_putstr(dest);
	//hope = ft_strstr(str, to_find); ft_putstr(hope);
	//printf("%d\n", ft_strcmp(s1,s2)); printf("%d\n", strcmp(s1,s2));	
	//printf(" me %d\n", ft_strncmp(s1, s2, n)); printf("him %d", strncmp(s1, s2, n));	
	//printf("%s", ft_strupcase(str));
	//printf("%s", ft_strlowcase(str));
	//printf("%s", ft_strcapitalize(str));
	//printf("%d", ft_str_is_alpha(str));
	//printf("%d", ft_str_is_numeric(str));
	//printf("%d", ft_str_is_lowercase(str));
	//printf("%d", ft_str_is_uppercase(str));
	//printf("%d", ft_str_is_printable(str));
	//printf("Me = %s\n", ft_strcat(dest, src)); printf("%s\n", dest);
	return(0);
}

