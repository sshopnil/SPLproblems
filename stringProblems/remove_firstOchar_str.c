// #include<stdio.h>
// void removechar(char str1[], char c);
// int main()
// {
//     char str1[100], c;

//     printf("Enter string: ");
//     gets(str1);
//     printf("Character to remove: ");
//     scanf("%c", &c);

//     removechar(str1, c);
    
//     printf("After removing %c from string is: %s\n", c, str1);
    
//     return 0;
// }
// void removechar(char str1[], char c)
// {
//     int len1, i, j;

//     for(len1 = 0; str1[len1] != '\0'; len1++);

//     for(i = 0; i < len1 && str1[i] != c; i++);

//     while(i < len1)
//     {
//         str1[i] = str1[i+1];
//         i++;
//     }
// }
#include<stdio.h>
int checkSubStr(char str1[], char str2[])
{
    int i, j, len1, len2;

    for(len1 = 0; str1[len1] != '\0'; len1++);
    for(len2 = 0; str2[len2] != '\0'; len2++);

    for(i = 0; i <= len1-len2; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(str1[i+j] != str2[j])
            {
                break;
            }
        }
        if(j == len2)
        {
            return i;
        }
    }
    return -1;
}
void rmvSubStr(char str1[], int n)
{
    int i, j, len;
    
    for(len = 0; str1[len] != '\0'; len++);

    for(i = n; i < len-n; i++)
    {
        str1[i] = str1[i+1];
    }
}
int main()
{
    char str1[100], str2[50];
    int sub_i;

    gets(str1);
    gets(str2);

    sub_i = checkSubStr(str1, str2);
    rmvSubStr(str1, sub_i);

    printf("%s", str1);
}