// #include<stdio.h>

// int main()
// {
//     char a;

//     scanf("%c", &a);

//     if(a >= '0' && a <= '9')
//     {
//         a -= '0';
//     }
//     else
//     {
//         printf("Wrong input\n");
//         return 0;
//     }
//     printf("%d\n", a);
// }

#include<stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if(a >= 0 && a <= 9)
    {
        a += '0';
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("%c\n", a);
}