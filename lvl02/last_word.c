#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	i;
	int last_letter;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
		i++;
	i--;
	while (i > 0)
	{
		if (argv[1][i] != ' ' && argv[1][i] != 9 && argv[1][i] != 11)
			break ;
		i--;
	}
	last_letter = i;
	while (argv[1][i] != ' ' && argv[1][i] != 9 && argv[1][i] != 11)
		i--;
	while (last_letter >= i)
	{
		if (argv[1][i] == ' ' || argv[1][i] == 9 || argv[1][i] == 11)
		{
			i++;
			continue ;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
