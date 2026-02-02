#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int repetition;
    int i;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            repetition = argv[1][i] - 64;
            while (repetition > 0)
            {
                write(1, &argv[1][i], 1);
                repetition--;
            }
        }
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            repetition = argv[1][i] - 96;
            while (repetition > 0)
            {
                write(1, &argv[1][i], 1);
                repetition--;
            }
        }
        else
        {
            write(1, &argv[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
