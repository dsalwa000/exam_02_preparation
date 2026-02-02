#include <stdlib.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (*s != '\0')
    {
        while (accept[i] != '\0')
        {
            if (accept[i] == *s)
            {
                count++;
                break;
            }
            i++;
        }
        if (accept[i] == '\0')
            return (count);
        i = 0;
        s++;
    }
    return (count);
}

#include <stdio.h>
#include <string.h>

int main()
{
    // 1. Pusty ciąg przeszukiwany (zawsze da 0)
    printf("%ld\n", ft_strspn("", "abc")); 

    // 2. Pusty zbiór dozwolonych znaków (zawsze da 0, bo pierwszy znak tekstu nie jest w pustym zbiorze)
    printf("%ld\n", ft_strspn("abc", "")); 

    // 3. Brak dopasowania na samym początku (mimo że znaki występują dalej)
    printf("%ld\n", ft_strspn("zabc", "abc")); 

    // 4. Pełne dopasowanie (cały ciąg składa się z dozwolonych znaków)
    printf("%ld\n", ft_strspn("aaaaa", "a")); 

    // 5. Zbiór dozwolonych znaków zawiera duplikaty (nie wpływa to na wynik)
    printf("%ld\n", ft_strspn("abc", "aaabbbccc")); 

    // 6. Szukanie znaków białych (spacja, tabulacja)
    printf("%ld\n", ft_strspn("  \t  hello", " \t")); 

    // 7. Znaki specjalne i liczby jako jedyne dozwolone
    printf("%ld\n", ft_strspn("123-456", "0123456789")); 

    // 8. Napis zaczyna się od znaku konca linii lub innego niedrukowalnego
    printf("%ld\n", ft_strspn("\n\nabc", "\n")); 

    // 9. Wielkość liter ma znaczenie (Case-sensitivity)
    printf("%ld\n", ft_strspn("ABCabc", "ABC")); // Wynik: 3, bo 'a' to nie 'A'

    // 10. Dozwolone znaki są "rozrzucone" w zbiorze w innej kolejności
    printf("%ld\n", ft_strspn("cba_xyz", "abc")); // Wynik: 3, dopóki napotka '_'


    printf("\n");
    // 1. Pusty ciąg przeszukiwany (zawsze da 0)
    printf("%ld\n", ft_strspn("", "abc")); 

    // 2. Pusty zbiór dozwolonych znaków (zawsze da 0, bo pierwszy znak tekstu nie jest w pustym zbiorze)
    printf("%ld\n", ft_strspn("abc", "")); 

    // 3. Brak dopasowania na samym początku (mimo że znaki występują dalej)
    printf("%ld\n", ft_strspn("zabc", "abc")); 

    // 4. Pełne dopasowanie (cały ciąg składa się z dozwolonych znaków)
    printf("%ld\n", ft_strspn("aaaaa", "a")); 

    // 5. Zbiór dozwolonych znaków zawiera duplikaty (nie wpływa to na wynik)
    printf("%ld\n", ft_strspn("abc", "aaabbbccc")); 

    // 6. Szukanie znaków białych (spacja, tabulacja)
    printf("%ld\n", ft_strspn("  \t  hello", " \t")); 

    // 7. Znaki specjalne i liczby jako jedyne dozwolone
    printf("%ld\n", ft_strspn("123-456", "0123456789")); 

    // 8. Napis zaczyna się od znaku konca linii lub innego niedrukowalnego
    printf("%ld\n", ft_strspn("\n\nabc", "\n")); 

    // 9. Wielkość liter ma znaczenie (Case-sensitivity)
    printf("%ld\n", ft_strspn("ABCabc", "ABC")); // Wynik: 3, bo 'a' to nie 'A'

    // 10. Dozwolone znaki są "rozrzucone" w zbiorze w innej kolejności
    printf("%ld\n", ft_strspn("cba_xyz", "abc")); // Wynik: 3, dopóki napotka '_'
    return (0);
}
