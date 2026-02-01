#include "stdlib.h"

char    *ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = (char*)malloc(i + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
// 	char dup[30] = "123r qw.        g	";
// 	char *copy;

// 	copy = ft_strdup(dup);
// 	printf("%s\n", copy);
// 	return 0;
// }