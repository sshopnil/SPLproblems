#include<stdio.h>
int CheckSubString(char str1[], char str2[]);
int main()
{
    char str1[100], str2[100];

    gets(str1);
    gets(str2);

    int check = CheckSubString(str1, str2);

    printf("%d\n", check);

    return 0;
}
int CheckSubString(char str1[], char str2[])
{
    int i, j, len1, len2;

    for(len1 = 0; str1[len1] != '\0'; len1++);
    for(len2 = 0; str2[len2] != '\0'; len2++);

    if(len2 == 0) return 0;

    for(i = 0; i <= len1-len2; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(str1[i+j] != str2[j]) break;
        }
        if(j == len2)
        return i;
    }
    return -1;
}
