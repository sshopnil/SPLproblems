#include <stdio.h>

int main()
{
    char a;

    scanf("%c", &a);

    if(a >= 65 && a <= 90)
    {
        a -= 65;
        a += 97;
    }
    else if(a >= 97 && a <= 122)
    {
        a -= 97;
        a += 65;
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("%c\n", a);
}