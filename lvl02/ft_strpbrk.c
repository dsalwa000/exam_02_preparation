char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		stop;
	int		i;

	i = 0;
	stop = 0;
	while (*s1 != '\0')
	{
		while (s2[i] != '\0')
		{
			if (s2[i] == *s1)
			{
				stop = 1;
				break;
			}
			i++;
		}
		if (stop)
			break;
		i = 0;
		s1++;
	}
	if (*s1 == '\0')
		return (0);
	return ((char *)s1);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     // 1. Pusta lista 'accept' -> NULL
//     printf("%p\n", (void*)ft_strpbrk("hello", ""));

//     // 2. Pusty string wejściowy -> NULL
//     printf("%p\n", (void*)ft_strpbrk("", "abc"));

//     // 3. Match na samym początku -> adres początku s
//     const char *s3 = "admin";
//     printf("%p == %p\n", (void*)ft_strpbrk(s3, "a"), (void*)s3);

//     // 4. Brak dopasowań -> NULL
//     printf("%p\n", (void*)ft_strpbrk("pure", "xyz"));

//     // 5. Spacja jako znak szukany -> wskaźnik do spacji
//     printf("%s\n", ft_strpbrk("hello world", " "));

//     // 6. Duplikaty w 'accept' -> działa normalnie
//     printf("%s\n", ft_strpbrk("test", "tttttt"));

//     // 7. Match na samym końcu -> wskaźnik do ostatniej litery
//     printf("%s\n", ft_strpbrk("code", "e"));

//     // 8. Twój przykład z dsw -> "ew dsqwef dsw"
//     printf("%s\n", ft_strpbrk("fwew dsqwef dsw", "red"));

//     return (0);
// }
