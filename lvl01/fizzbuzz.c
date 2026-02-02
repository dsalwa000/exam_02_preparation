#include "unistd.h"

void write_int(int num)
{
    char    unit;
    char    tens;

    unit = num % 10 + 48;
    tens = num / 10 + 48;

    if (num >= 10)
    {
        write(1, &tens, 1);
        write(1, &unit, 1);
    }
    else
        write(1, &unit, 1);
    write(1, "\n", 1);
}

int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        if (i % 3 == 0)
            write(1, "fizz\n", 5);
        if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
            write_int(i);
        i++;
    }
    return (0);
}
