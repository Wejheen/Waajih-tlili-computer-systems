
//team with "Francesco Fracas"
#include <unistd.h>

void Bin_To_Hex(int n)
{
    char hex[] = "0123456789abcdef";
    int group;
    int power;
    int digit;
    int temp;

    if (n < 0)
    {
        write(1, "Error: invalid binary\n", 22);
        return;
    }

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        if (digit != 0 && digit != 1)
        {
            write(1, "Error: invalid binary\n", 22);
            return;
        }

        temp = temp / 10;
    }

    if (n >= 10000)
        Bin_To_Hex(n / 10000);

    group = 0;
    power = 1;
    temp = n % 10000;

    while (temp > 0)
    {
        digit = temp % 10;
        group = group + digit * power;
        power = power * 2;
        temp = temp / 10;
    }

    write(1, &hex[group], 1);
}

int main(void)
{
    Bin_To_Hex(1010);
    write(1, "\n", 1);

    Bin_To_Hex(11111111);
    write(1, "\n", 1);

    Bin_To_Hex(101011);
    write(1, "\n", 1);

    Bin_To_Hex(1021);
    write(1, "\n", 1);

    return 0;
}
