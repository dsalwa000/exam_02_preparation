// #include <stdio.h>

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

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	printf("%d\n", ft_atoi("  -8231214"));
// 	printf("%d\n", atoi("    -8231214"));
// 	return (0);
// }
