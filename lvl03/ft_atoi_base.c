int power_to(int number, int power)
{
	while (power > 1)
	{
		number = number * number;
		power--;
	}
	return (number);
}

int	ft_atoi_base(const char *str, int str_base)
{
	char	base[] = "0123456789abcdef";
	int		negative;
	int		length;
	int		i;
	int		j;
	int		result;

	negative = 1;
	i = 0;
	if (str[0] == '-')
	{
		negative = -1;
		i++;
	}
	length = 0;
	while (str[length] != '\0')
		length++;
	length--;
	result = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] == str[i] && j < str_base)
			j++;
		result = j * power_to(16, length) + result;
		i++;
	}
	return (result * negative);
}

#include <stdio.h>
int main()
{
	char s[] = "af34";
	printf("%d\n", ft_atoi_base(s, 16));
	return (0);
}
