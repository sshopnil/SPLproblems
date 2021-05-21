#include<stdio.h>

long int sumOfDigits(int n)
{
    if(n < 10)
    {
        return n;
    }
    else
    {
        return sumOfDigits(n/10)+n%10;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%ld\n", sumOfDigits(n));

    return 0;
}
 