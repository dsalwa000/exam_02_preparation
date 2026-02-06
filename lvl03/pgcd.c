#include <stdio.h>
#include <stdlib.h>

// zapamietaj algorytm na hcd!
int	hcd(int a, int b)
{
	int	temp;

	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\n");
		return(0);
	}
	printf("%d\n", hcd(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
