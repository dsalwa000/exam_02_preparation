#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i) & 1;
		if (bit == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

int main()
{
	print_bits(255);
	return (0);
}