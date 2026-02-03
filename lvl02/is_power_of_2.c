#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 1)
		return (1);
	else if (n % 2 == 1)
		return (0);
	else if (n > 1)
		return (is_power_of_2(n / 2));
	return (0);
}

// int main()
// {
// 	printf("%d\n", is_power_of_2(3290));
// 	return (0);
// }
