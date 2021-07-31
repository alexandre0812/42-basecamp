void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	end = size - 1;
	start = 0;
	while (start < end)
	{
		ft_swap(&tab[start], &tab[end]);
		end--;
		start++;
	}
}
