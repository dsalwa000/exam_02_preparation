#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return (s1);
}

// #include <stdio.h>
// int main()
// {
//     char s1[10];
//     char s2[15] = "  hwqu  fau";
//     ft_strcpy(s1, s2);
//     printf("%s\n", s1);
//     return (0);
// }
