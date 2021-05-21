// //sum of 1+5+9+... number series pr3
// #include<stdio.h>

// long int sumOf(int n)
// {
//     int num = n - 1;
//     if(num <= 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (1 + 4 * num) + sumOf(num);
//     }
// }

// int main()
// {
//     int N;

//     scanf("%d", &N);

//     printf("%ld\n", sumOf(N));

//     return 0;
// }


//sum of 2**n series

#include<stdio.h>
#include<math.h>

long int sumOf_2powN(int n)
{
    int limit = n - 1;
    if(limit <= 0)
    {
        return 1;
    }
    else
    {
        return pow(2,limit)+sumOf_2powN(limit);
    }
}

int main()
{
    int num;

    scanf("%d", &num);

    printf("%ld\n", sumOf_2powN(num));

    return 0;
}

