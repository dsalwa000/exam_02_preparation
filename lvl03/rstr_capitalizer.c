#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc < 2)
	{
		write (1, "\n", 1);
		return(0);
	}
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
			{
				argv[i][j] += 32;
			}
			j++;
		}
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (is_space(argv[i][j + 1]) || argv[i][j + 1] == '\0')
				if (is_lowercase(argv[i][j]))
					argv[i][j] -= 32;
			write(1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
