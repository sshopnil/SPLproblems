#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int len1, len2, i, j;

    gets(str1);
    gets(str2);

    for(len1 = 0; str1[len1] != '\0'; len1++);

    for(len2 = 0; str2[len2] != '\0'; len2++);

    for(i = 0; i <= len1-len2; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(str1[i+j] != str2[j])
            break;
        }
        if(j == len2)
        {
            printf("Substring\n");
            return 0;
        }
    }
    printf("Not substring\n");
    return 0;
}