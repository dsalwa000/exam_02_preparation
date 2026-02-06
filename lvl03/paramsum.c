#include <stdio.h>
#include <unistd.h>

// zapamietaj jak sie robi putnbr!!!
void	putnbr(int nbr)
{
	char c;

	if (nbr > 9)
		putnbr(nbr / 10);
	c = (nbr % 10) + 48;
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	(void)argv;
	putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
