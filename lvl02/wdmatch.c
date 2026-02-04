#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int	length_finish;
	int	i;
	int	j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	length_finish = 0;
	while (argv[1][i] != '\0')
	{
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				j++;
				length_finish++;
				break;
			}
			j++;
		}
		i++;
	}
	if (i == length_finish)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
