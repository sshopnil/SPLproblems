// find Nth fibonacci term

#include<stdio.h>

long int fib(int n) //returns Nth fibonacci number
{
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else
    {
        return fib(n-1) + fib(n-2);
    }
}


int main()
{
    int num;

    scanf("%d", &num);

    printf("%ld\n", fib(num));

    return 0;
}