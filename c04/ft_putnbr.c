#include <unistd.h>

void	regular_print(int nb)
{
	int		num_aux;
	int		cont;
	char	numChar[10];

	num_aux = nb;
	cont = 0;
	while (num_aux > 0)
	{	
		nb = nb % 10;
		numChar[cont] = '0' + nb;
		cont++;
		num_aux = num_aux / 10;
		nb = num_aux;
	}
	while (cont > 0)
	{
		write(1, &numChar[cont - 1], 1);
		cont--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb > -2147483648 && nb <= 2147483647)
	{	
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
			regular_print(nb);
		}
		else if (nb == 0)
			write(1, "0", 1);
		else
			regular_print(nb);
	}
}
