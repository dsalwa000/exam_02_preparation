#include <unistd.h>

void ft_putstr(char *s)
{
    while (*s != '\0')
    {
        write(1, s, 1);
        s++;
    }
}

// int main()
// {
//     ft_putstr("heyqwf qwoij wqw    q");
//     return (0);
// }
