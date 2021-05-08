#include<stdio.h>
const int SIZE = 50;

int main()
{
    char str[SIZE];
    int i, f = 0, len, b;
    gets(str);

    for(len = 0; str[len] != '\0'; len++);
    b = len;

    for(i = 0; i <= len/2; i++)
    {
        if(str[i] != str[--b])
        {
            f = 1;
            break;
        }
    }
    if(f == 1)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }

    return 0;
}