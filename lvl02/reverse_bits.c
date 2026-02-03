#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	byte;
	int				i;

	byte = 0;
	i = 8;
	while (i > 0)
	{
		byte = (byte << 1);
		byte = byte | (octet & 1);
		octet = (octet >> 1);
		i--;
	}
	return (byte);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", reverse_bits(235));
// 	return (0);
// }
