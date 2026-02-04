#include <stdio.h>
#include <unistd.h>

int convert_to_number(char *a)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (a[i] != '\0')
	{
		result = a[i] - 48 + result * 10;
		i++;
	}
	return (result);
}

void putnbr(int n)
{
	char digit;

	if (n >= 10)
		putnbr (n/10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int is_prime(int n)
{
	int i = 2;
	
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int	number;
	int i;
	int result;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argv[1][0] == '-')
	{
		write(1, "0\n", 2);
		return (0);
	}
	number = convert_to_number(argv[1]);
	i = 0;
	result = 0;
	while (number >= i)
	{
		if (is_prime(i))
		{
			result += i;
		}
		i++;
	}
	putnbr(result);
	write(1, "\n", 1);
}
