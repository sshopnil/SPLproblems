#include<stdio.h>

long int n_factorial(int number)
{
    if(number == 1)
    {
        return number;
    }
    else
    {
        return n_factorial(number-1)*number;
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%ld\n", n_factorial(n));

    return 0;
}