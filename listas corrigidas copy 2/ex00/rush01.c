#include <unistd.h>
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	line;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((line == 1 && column == 1 ))
				ft_putchar('/');
			else if ((column != 1 && line != 1 && (line == y && column == x)))
				ft_putchar('/');
			else if ((line == 1 && column == x) || (line == y && column == 1))
				ft_putchar ('\\');
			else if (column == 1 || column == x || line == 1 || line == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
