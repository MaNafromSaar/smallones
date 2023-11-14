#include <stdio.h>

int collatz(int n)
{
    int c = 0;
    while (n != 1)
        if (n % 2 == 0)
        {
            n = n / 2;
            c++;
        }
        else
        {
            n = 3 * n + 1;
            c++;
        }
    return(c);
}


int main (int n)
{
    n = 1;
    while (n < 1001)
    {
        printf("%d\n", collatz(n));
        n++;
    }
    return (0);
}