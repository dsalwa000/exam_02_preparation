#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int number;

	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	number = atoi(av[1]);
	if (number == 1)
	{
		printf("1\n");
		return (0);
	}
	i = 2;
	while (number >= i)
	{
		if (number % i == 0)
		{
			printf("%d", i);
			number /= i;
			if (number > 1)
				printf("*");
		}
		else
			i++;
	}
	printf("\n");
	return (0);
}
