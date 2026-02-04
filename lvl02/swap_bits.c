#include <stdio.h>
unsigned char	swap_bits(unsigned char octet)
{
	char	swap_1;
	char	swap_2;

	swap_1 = octet >> 4;
	swap_2 = octet << 4;
	return swap_1 | swap_2;
}

int main()
{
	printf("%d\n", swap_bits(20));
}