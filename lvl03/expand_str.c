#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int	spaces;
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	spaces = 0;
	while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\v')
		i++;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\v')
			spaces++;
		else if (spaces > 0 && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\v')
		{
			write(1, "   ", 3);
			write(1, &argv[1][i], 1);
			spaces = 0;
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
