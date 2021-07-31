#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int a[10] = {32,12,3,42,321,-23,0,1,-1,243};
    int *tab;
    int size = 10;
    int i = 0;

    tab = &a[0]; // o ponteiro tab aponta pro primeiro elemento de a

    ft_sort_int_tab(tab, size);
    while (i < size)
    {
        //printf("%d ", a[i]);
        i++;
    }

    return 0;
}