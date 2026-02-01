#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	first;
	int	second;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	if (argv[2][0] == '*')
		printf("%d", first * second);
	if (argv[2][0] == '/')
		printf("%d", first / second);
	if (argv[2][0] == '+')
		printf("%d", first + second);
	if (argv[2][0] == '-')
		printf("%d", first - second);
	if (argv[2][0] == '%')
		printf("%d", first % second);	
	printf("\n");
	return(0);
}
