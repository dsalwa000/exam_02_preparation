#include <stdlib.h>
#include <stdio.h>


// po malloc daj guard!

int     *ft_range(int start, int end)
{
	int	*tab;
	int	size;
	int	i;

	size = end - start + 1;
	tab = (int*)malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[size - 1] = start;
		start++;;
		size--;
	}
	return (tab); 
}

int main()
{
    int start = 5;
    int end = 3;
    int size = end - start + 1;
    int *a = ft_range(start, end);
    int i = 0;

    while (i < size)
    {
        printf("%d\n", a[i]);
        i++;
    }
    free(a);
    return (0);
}
