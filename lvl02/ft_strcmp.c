int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2++;
		s1++;
	}
	if (*s1 == '\0')
		return (*s2 * -1);
	return (*s1);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	printf("%d\n", ft_strcmp("fqwfqweffe", "fqwfqwef"));
// 	return (0);
// }
