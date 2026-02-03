#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int print;
    int i;
    int j;
    int z;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    j = 0;
    z = 0;
    print = 0;
    while (argv[1][i] != '\0')
    {
        while (argv[2][j] != '\0')
        {
            if (argv[1][i] == argv[2][j])
            {
                z = i - 1;
                print = 1;
                while (z >= 0)
                {
                    if (argv[1][z] == argv[1][i])
                    {
                        print = 0;
                        break;
                    }
                    z--;
                }
                break;
            }
            j++;
        }
        if (print == 0)
        {
            print = 1;
        }
        else
        {
            write(1, &argv[1][i], 1);
            print = 0;
        }
        j = 0;
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
