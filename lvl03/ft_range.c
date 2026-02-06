#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int	*tab;
	int	size;

	size = end - start + 1;
	tab = (int*)malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	while (size > 0)
	{
		tab[size - 1] = end;
		end--;
		size--;
	}
	printf("\n");
	return (tab); 
}

int main()
{
    int start = 5;
    int end = 24;
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
