#include <unistd.h>
void    ft_putchar(char c);

void    rush(int x, int y)
{
    int    L;
    int    C;

    C = 1;
    while (C <= y)
    {    
        L = 1;
        while (L <= x)
        {
            if ((C == 1 && L == 1 ) || (L != 1 && C != 1 && (C == y && L == x)))
                ft_putchar('/');
            else if ((C == 1 && L == x) || (C == y && L == 1))
                ft_putchar ('\\');
            else if (L == 1 || L == x || C == 1 || C == y)
                ft_putchar('*');
            else
                ft_putchar(' ');
            L++;
        }
        ft_putchar('\n');
        C++;
    }    
}