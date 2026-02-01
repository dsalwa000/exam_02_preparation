#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	save;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i < len / 2)
	{
		save = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = save;
		i++;
	}
	return (str);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
// 	char c[] = "  ygu  55 p";
// 	printf("%s\n", ft_strrev(c));
// 	return 0;
// }
