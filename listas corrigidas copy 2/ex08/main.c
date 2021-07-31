#include <unistd.h>
#include <stdio.h>

void ft_print_combn(int n)
{
    if (n < 1 || n > 9)
        return;
    char number[9];
    int m;
    //no flip, de dezena, o da direita vira o da esquerda +1
    m = n;
    while (n >= 0)
    {
        if (number[m] > )
        m--;
        n--;
    }

}
// 
int main(void)
{
    int n;
    scanf("%i", &n);
    ft_print_combn(n);
    return (0);
}