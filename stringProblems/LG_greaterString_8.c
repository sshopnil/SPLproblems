#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i;

    gets(str1);
    gets(str2);

    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str2[i] > str1[i])
        {
            printf("%s\n", str1);
            return 0;
        }
        else if(str1[i] > str2[i])
        {
            printf("%s\n", str2);
            return 0;
        }
    }
    printf("Both are equal\n");
    return 0;
}