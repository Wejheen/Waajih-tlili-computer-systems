
#include <unistd.h>

//team with "Francesco Fracas"

void hexconvert(int n)
{
    char hex[] = "0123456789abcdef";

    if (n >= 0 && n <= 15)
    {
        write(1, &hex[n], 1);
    }
}

int main(void)
{
    hexconvert(10);
    write(1, "\n", 1);

    hexconvert(15);
    write(1, "\n", 1);

    hexconvert(7);
    write(1, "\n", 1);

    return 0;
}
