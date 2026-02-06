#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	matched;
	int	length;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	matched = 0;
	length = 0;
	while (argv[1][length] != '\0')
		length++;
	while (argv[1][i] != '\0')
	{
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				j++;
				matched = 1;
				break;
			}
			j++;
		}
		if (matched == 0)
		{
			break;
		}
		matched = 0;
		i++;
	}
	if (i == length)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
