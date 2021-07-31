#include <unistd.h>

void	print_number(int a, int b, int c)
{
	if (b < c && a < b)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7')
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	number_1;
	char	number_2;
	char	number_3;

	number_1 = '0';
	number_2 = '1';
	number_3 = '2';
	while (number_1 <= '7')
	{
		while (number_2 <= '8')
		{
			while (number_3 <= '9')
			{
				print_number(number_1, number_2, number_3);
				number_3++;
			}
			number_3 = '0';
			number_2++;
		}
		number_2 = '0';
		number_1++;
	}
}
