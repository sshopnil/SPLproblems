// #include<stdio.h>

// int reverse_num(int n)
// {
//     static int rev, sum = 0;
//     if(n > 0)
//     {
//         rev = n % 10;
//         sum = sum*10 + rev; 
//         reverse_num(n/10);
//     }
//     else
//     {
//         return 0;
//     }
//     return sum;
// }

// int main()
// {
//     int n, rev;

//     scanf("%d", &n);
//     rev = reverse_num(n);

//     printf("%d\n", rev);
//     return 0;
// }



//Another way

#include<stdio.h>

int reverse(int n, int temp)
{
    if(n == 0)
    return temp;

    temp = temp * 10 + n % 10;

    return reverse(n/10, temp);
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("Reverse: %d\n", reverse(num, 0));
    return 0;
}