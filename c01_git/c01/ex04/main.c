#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void){
	int num1=40;
	int num2=10;
	int *a;
	int *b;

	a=&num1;
	b=&num2;

	ft_ultimate_div_mod(a,b);

	printf("%d ", num1);
	printf("%d \n", num2);
}