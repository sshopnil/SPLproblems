#include<stdio.h>
int main()
{
    char str[100];
    int i;

    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] -= 65;
            str[i] += 97; 
        }
    }
    printf("%s\n", str);
    return 0;
}