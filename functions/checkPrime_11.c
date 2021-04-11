// #include<stdio.h>
// int isPrime(int a, int i) //recursive function
// {
//     if(i == 1) return 1;
//     else if(i < 1) return 0;
//     else
//     {
//         if(a%i == 0) return 0;
//         else
//         {
//             isPrime(a, i-1);
//         }
//     }
// }
// int main()
// {
//     int num;
//     scanf("%d", &num);

//     int prime = isPrime(num, num/2);

//     if(prime == 1)printf("Prime number\n");
//     else
//     {
//         printf("Not a prime number\n");
//     }
//     return 0;
// }

#include<stdio.h>
int isPrime(int a) //using loop
{
    if(a < 2) return 0;
    int i;

    for(i = 2; i*i <= a; i++)
    {
        if(a%i == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int n; 
    scanf("%d", &n);

    int prime = isPrime(n);

    if(prime == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
}