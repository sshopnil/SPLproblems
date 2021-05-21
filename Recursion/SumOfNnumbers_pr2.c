#include<stdio.h>

long int sumOfN(int n)
{
    if(n == 1)
    {
        return n;
    }
    else
    {
        return sumOfN(n-1)+n;
    }
}

int main()
{
    int number;

    scanf("%d", &number);

    printf("%ld\n", sumOfN(number));

    return 0;
}