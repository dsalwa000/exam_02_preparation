#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	count;
	int		stop;
	int		i;

	i = 0;
	count = 0;
	stop = 0;
	while (*s != '\0')
	{
		while (reject[i] != '\0')
		{
			if (reject[i] == *s)
			{
				stop = 1;
				break;
			}
			i++;
		}
		if (stop)
			break;
		count++;
		i = 0;
		s++;
	}
	return (count);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     printf("--- Testy ft_strcspn ---\n");

//     // 1. Pusta lista 'reject' - powinien zwrócić pełną długość stringa
//     printf("Pusty reject:    %lu\n", ft_strcspn("Dyscyplina", "")); 

//     // 2. Pusty string wejściowy - powinien zwrócić 0
//     printf("Pusty string:    %lu\n", ft_strcspn("", "abc"));

//     // 3. Pierwszy znak jest na liście - powinien zwrócić 0
//     printf("Match na start:  %lu\n", ft_strcspn("sukces", "s"));

//     // 4. Brak jakichkolwiek dopasowań - powinien zwrócić pełną długość
//     printf("Brak matchu:     %lu\n", ft_strcspn("kodowanie", "xyz"));

//     // 5. Spacja jako znak odrzucony - test obsługi białych znaków
//     printf("Spacja:          %lu\n", ft_strcspn("Peace of mind", " "));

//     // 6. Duplikaty w 'reject' - nie powinny psuć logiki
//     printf("Duplikaty:       %lu\n", ft_strcspn("test", "tttttt"));

//     // 7. Dopasowanie na samym końcu - powinien zwrócić strlen(s) - 1
//     printf("Match na koncu:  %lu\n", ft_strcspn("C-language", "e"));

//     // 8. Reject zawiera znaki specjalne (escape characters)
//     printf("Znaki specjalne: %lu\n", ft_strcspn("Linia\nNowa", "\n"));

//     // 9. Twój przykład z pytania
//     printf("Przyklad z dsw:  %lu\n", ft_strcspn("fwew dsqwef dsw", "red"));

//     // 10. Szukanie znaku, który jest cyfrą
//     printf("Cyfry:           %lu\n", ft_strcspn("Rok 2026", "0123456789"));

//     return (0);
// }
