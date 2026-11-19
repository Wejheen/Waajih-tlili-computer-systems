
#include <unistd.h>

//team with "Francesco Fracas"

void hexconvert(int n)
{
    char hex[] = "0123456789abcdef";

    if (n >= 0 && n <= 15)
        write(1, &hex[n], 1);
}

void Int_To_Hex(int n)
{
    long num = n;

    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }

    if (num >= 16)
        Int_To_Hex(num / 16);

    hexconvert(num % 16);
}

int main(void)
{
    Int_To_Hex(26);
    write(1, "\n", 1);

    Int_To_Hex(255);
    write(1, "\n", 1);

    Int_To_Hex(4095);
    write(1, "\n", 1);

    Int_To_Hex(-26);
    write(1, "\n", 1);

    return 0;
}
