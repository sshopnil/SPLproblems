#include<stdio.h>
int len(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++);

    return i;
}
void rmvSubStr(char str1[], char str2[])
{
    int i, j, in;
    int len1 = len(str1);
    int len2 = len(str2);

    for(i = 0; i <= len1-len2; i++)
    {
        int k = 1;
        for(j = 0; j < len2; j++)
        {
            if(str1[i+j] != str2[j])
            {
                k = 0;
                break;
            }
        }
        if(k == 1)
        {
            in = i;
        }
    }
    for(i = in; i <= len1-len2; i++)
    {
        str1[i] = str1[i+len2];
    }
}
int main()
{
    char str1[100], str2[100];

    gets(str1);
    gets(str2);
    rmvSubStr(str1,str2);
    
    printf("%s\n", str1);
    return 0;
}