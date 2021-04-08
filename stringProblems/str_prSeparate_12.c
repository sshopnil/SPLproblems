#include<stdio.h>
int main()
{
    char str[100];
    int i;

    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            printf("\n");
            continue;
        }
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}