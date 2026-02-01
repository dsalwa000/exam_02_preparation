#include <unistd.h>

int single_char(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	if (length > 1 || length == 0)
		return (0);
	return (1);
}

int main(int argc, char **argv)
{
	int i;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (!single_char(argv[2]) && !single_char(argv[3]))
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
