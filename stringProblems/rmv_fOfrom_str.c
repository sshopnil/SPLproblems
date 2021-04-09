#include<stdio.h>
int lenght(char str[]) //returns string length
{
    int len;
    for(len = 0; str[len] != '\0'; len++);
    return len;
}
int checkSubStr(char str1[], char str2[]) //returns the substring index
{
    int i, j;

    int len1 = lenght(str1);
    int len2 = lenght(str2);

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
int rmvSubStr(char str1[], char str2[], int n) //returns length for printing removed string and removes str2 from str1
{
    int i, j, len1, len2;
    
    len2 = lenght(str2);
    len1 = len2;
    for(i = 0; str1[n+len2] != '\0'; i++)
    {
        str1[i+n] = str1[n+len2++];
    }
    return n+len2-len1;

}
int main()
{
    char str1[100], str2[50];
    int sub_i;

    gets(str1);
    gets(str2);

    sub_i = checkSubStr(str1, str2);
    int len = rmvSubStr(str1, str2, sub_i);

    for(int i = 0; i < len; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
}