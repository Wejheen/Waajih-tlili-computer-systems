
#include <unistd.h>

void printnum(int n)
{
    long num = n;
    char c;

    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }

    if (num >= 10)
    {
        printnum(num / 10);
    }

    c = (num % 10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    printnum(25);
    write(1, "\n", 1);

    printnum(-25);
    write(1, "\n", 1);

    printnum(0);
    write(1, "\n", 1);

    printnum(2147483647);
    write(1, "\n", 1);

    printnum(-2147483647 - 1);
    write(1, "\n", 1);

    return 0;
}

