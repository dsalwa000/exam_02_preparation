#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int	our_ascii[256];
	int	i;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (i < 256)
	{
		our_ascii[i] = 0;
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (our_ascii[(int)argv[1][i]] == 0)
		{
			our_ascii[(int)argv[1][i]]++;
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		if (our_ascii[(int)argv[2][i]] == 0)
		{
			our_ascii[(int)argv[2][i]]++;
			write(1, &argv[2][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
