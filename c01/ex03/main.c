#include <unistd.h>
#include <stdio.h>

void	ft_div_mod( int a, int b, int *div, int *mod);

int	main(void)
{

	int num1=43;
	int num2=10;
	int divisao;
	int modulo;
	int *div;
	int *mod;

	div=&divisao;
	mod=&modulo;

	ft_div_mod(num1,num2,div,mod);
	printf("%d \n", divisao);
	printf("%d", modulo);
	return (0);
}