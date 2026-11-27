//team with "Piotr"
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
        printnum(num / 10);

    c = (num % 10) + '0';
    write(1, &c, 1);
}

void Swap_Int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printnum(*a);
    write(1, " ", 1);
    printnum(*b);
    write(1, "\n", 1);
}

int main(void)
{
    int a = 10;
    int b = 20;

    Swap_Int(&a, &b);

    return 0;
}