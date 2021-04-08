#include<stdio.h>
int main()
{
    char a;

    scanf("%c", &a);

    if(a >= 65 && a <= 90)
    {
        a -= 'A'; // or, a -= 65;
        a += 'a'; //     a += 97;
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("%c\n", a);
    return 0;
}