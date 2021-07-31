#include <unistd.h>

void	ft_putchar(char c); //Chamar a função "externa" do putchar para conseguir imprimir os caracteres

void	rush(int x, int y) //Declaracao da funcao para imprimir conforme a entrada X e Y; X é largura e Y é a altura.
{
	int	L; //Declaracao de variavel L para auxiliar na "varredura" no while;
	int	A; //Declaracao de variavel A para auxiliar na "varredura" no while;

	A = 1; 
	while (A <= y) //Roda até o fim da altura que foi passado
	{
		L = 1; //Declaramos L igual 1 para "resetar" a contagem após concluir o while, para começar da largura/coluna 1 novamente.
		while (L <= x) //Roda até o fim da largura que foi passado
		{
			if ((L == 1 && A == 1) || ((x == L && y == A))) //Se for igual a posicao 1,1 ele imprime /, se altura e largura forem iguais também imprime
				ft_putchar('/');
			else if ((L == y && A == 1) || (L == 1 && A == y)) //Se for a largura 1 e a altura que foi passada ; Se for a altura 1 e a largura que foi passada
				ft_putchar('\\');
			else if ((L == 1 || L == x || A == 1 || A == y)) //Para pegar as "bordas" e entre as barras e contra barras (Tanto na largura e altura)
				ft_putchar('*');
			else //Imprime o espaço no restante dos espaços
				ft_putchar(' ');
			L++;
		}
		ft_putchar('\n'); //Faz a quebra de linha após varrer a largura, para não escrever tudo junto.
		A++; //Incrementa a altura para passar para a próxima 
	}
}
