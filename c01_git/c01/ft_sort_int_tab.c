#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size){
	int i;
	int j;
	int k;

	k=0;
	
	while (i<size)
	{
		j=i;
		while(j<size)
		{
			if(tab[i] > tab[j])
			{
				ft_swap(&tab[i],&tab[j]);
				
				while(k<size){
					printf("%d ", tab[k]);
					k++;
				}
				printf("\n");
				k=0;
			}
			j++;
		}
		i++;
	}
}
