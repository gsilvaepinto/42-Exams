#include <unistd.h>

void    ft_putnbr(int num)
{
    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);
}

int main()
{
    unsigned int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else
        {
            ft_putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
}