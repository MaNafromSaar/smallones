#include <stdio.h>
#include <math.h>

double cc(int n)
{
    double sum = 0.0;
    for(int i = 0; i <= n; i++)
    {
        sum += pow(-1, i) / pow((2 * i + 1), 2);
    }
    return sum;
}

int main()
{
    printf("%lf\n", cc(100000));
    return 0;
}