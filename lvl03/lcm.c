#include <stdlib.h>
#include <stdio.h>

unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	m;

	if (a == 0 || b == 0)
		return (0);
	m = a * b;
	if (m < 0) m = -m;
	return (m / hcf(a, b));
}

int main()
{
	printf("%d\n", lcm(48, 18));
}
