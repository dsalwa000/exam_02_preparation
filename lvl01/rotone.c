#include "unistd.h"

int main(int argc, char **argv)
{
    int     i;
    int     c;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            c = argv[1][i] + 1;
            if (c > 122)
                c = 96 + c - 122;
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            c = argv[1][i] + 1;
            if (c > 90)
                c = 64 + c - 90;
        }
        else
            c = argv[1][i];
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}
