#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

int	main(void){
	char *frase[20];
	*frase="Oi meu amigo\0";
//	ft_strlen(*frase);
	printf("%d",ft_strlen(*frase));
}