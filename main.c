#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

void	run_ex03()
{
			char *str = "     +--+---+--+--+0124ab545";
			printf("%d", ft_atoi(str));
}

int main(void)
{
	run_ex03();
	return (0);
}
