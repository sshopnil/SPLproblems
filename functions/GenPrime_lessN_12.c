// #include<stdio.h>
// void genPrime(int n) //generates prime numbers less than given integer
// {
//     if(n == 2) printf("%d is only prime\n", n);
//     else
//     {
//         int k = n;
//         printf("Prime less than %d: ", n);
//         for(int i = 2; i < n; i++)
//         { 
//             int k = 0;
//             for(int j = 2; j <= i/2; j++)
//             {
//                 if(i%j == 0)
//                 {
//                     k = 1;
//                     break;
//                 }
//             }
//             if(k == 0)
//             {
//                 printf("%d ", i);
//             }
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     genPrime(n);
//     return 0;
// }
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
void genPrime(int n)
{
    int i = 2, prime;
    printf("Prime less than %d: ", n);
    while (i < n)
    {
        prime =  isPrime(i);
        if(prime == 1)
        {
            printf("%d ", i);
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