// #include<stdio.h>
// int findSubstr(char str1[], char str2[])
// {
//     int i, j, len;
//     for(len = 0; str2[len] != '\0'; len++);
//     for(i = 0; str1[i] != '\0'; i++)
//     {
//         for(j = 0; str2[j] != '\0'; j++)
//         {
//             if(str1[i+j] != str2[j])
//             break;
//         }
//         if(j==len) return 1;
//     }
//     return -1;
// }
// int main()
// {
//     char str1[100], str2[50];
    
//     gets(str1);
//     gets(str2);

//     int found = findSubstr(str1, str2);
    
//     printf("%d\n", found);
// }
#include<stdio.h>
int strLength(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}
int find_subStr(char str1[], char str2[])
{
    int i, j, len1, len2;

    len1 = strLength(str1);
    len2 = strLength(str2);
   
    for(i = 0; i <= len1-len2; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(str1[i+j] != str2[j])
            break;
        }
        if(j == len2)
        return 1;
    }
    return -1;
}
int main()
{
    char str1[100], str2[50];

    gets(str1);
    gets(str2);
    printf("%d \n", find_subStr(str1, str2));

    return 0;
}