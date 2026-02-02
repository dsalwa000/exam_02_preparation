void	ft_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

#include "stdio.h"
int main()
{
    int i = 3;
    int j = 5;
    ft_swap(&i, &j);
    printf("%d, %d\n", i, j);
    return (0);
}
