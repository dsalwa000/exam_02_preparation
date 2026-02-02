#include "unistd.h"
#include "stdio.h"

void put_char(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    if (argc != 2)
    {
        put_char('\n');
        return (0);
    }
    i = 0;
    while (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
        i++;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= 33 && argv[1][i] <= 126)
        {
            put_char(argv[1][i]);
            i++;
        }
        else
            break ;
    }
    put_char('\n');
    return (0);
}
