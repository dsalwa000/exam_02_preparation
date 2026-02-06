#include <unistd.h>

void putnbr(int nbr)
{
	char	c;

	if (nbr > 9)
		putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}


int main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (10 > i)
	{
		c = i + '0';
		write(1, &c, 1);
		write(1, " x ", 3);
		putnbr(ft_atoi(argv[1]));
		write(1, " = ", 3);
		putnbr(i * ft_atoi(argv[1]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
