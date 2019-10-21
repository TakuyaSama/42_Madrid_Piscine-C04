#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

void	run_ex00()
{
	char *str = "Ola k ase";
	printf("%d", ft_strlen(str));
}

/*void	run_ex01()
{
	printf("%d", ft_strncmp("aplay", "aolaz", 5));
}*/

/*void	run_ex02()
{
	char src[] = "1234";
	char dest[] = "Jorge";
	printf("%s", ft_strcat(dest, src));
}*/

/*void	run_ex03()
{
	char src[] = "1234";
	char dest[] = "J";
	printf("%s", ft_strncat(dest, src, 2));
}*/

/*void	run_ex04()
{
	char *str = "Foo Bar Baz";
	char *to_find = "Bar";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
}*/

int main(void)
{
	run_ex00();
	return (0);
}
