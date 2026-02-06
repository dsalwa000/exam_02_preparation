#include <unistd.h>

unsigned int	ft_atoi(char *nb)
{
	unsigned int	result;
	int				i;

	i = 0;
	result = 0;
	while(nb[i] != '\0')
	{
		result = (nb[i] - 48) + result * 10;
		i++;
	}
	return (result);
}

void	print_hex(unsigned int nb)
{
	char	letters[] = "0123456789abcdef";

	if (nb > 15)
		print_hex(nb / 16);
	write(1, &letters[nb % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
