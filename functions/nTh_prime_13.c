#include<stdio.h>
int isPrime(int n)
{ 
    int i;
    for(i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int genPrime(int n)
{
    int i = 2, prime, coun = 0;
    printf("%dth prime: ", n);
    while (1)
    {
        prime =  isPrime(i);
        if(prime == 1)
        {
            coun++;
        }
        if(coun == n)
        {
            printf("%d\n", i);
            break;
        }
        i++;
    }
    
}
int main()
{
    int n;

    scanf("%d", &n);
    genPrime(n);

    return 0;
}