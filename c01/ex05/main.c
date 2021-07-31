#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void){
	char *frase[20];
	*frase="Oi meu amigo\0";
	ft_putstr(*frase);
}