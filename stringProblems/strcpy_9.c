#include<stdio.h>
void Strcpy(char c1[], char c2[])
{
    int i;

    for(i = 0; c1[i] != '\0'; i++)
    {
        c2[i] = c1[i];
    }
}
int main()
{
    char str1[100], str2[100];

    gets(str1);

    Strcpy(str1, str2);

    printf("%s\n", str2);
}