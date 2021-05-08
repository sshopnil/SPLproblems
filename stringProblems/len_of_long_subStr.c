#include<stdio.h>

int LongSubstr(char str1[])
{
    char str2[100];
    int i, j, len2, in = 0;
    int len1;
    for(len1= 0; len1 < str1[i] != '\0'; len1++);

    str2[0] = str1[0];

    for(i = 0, len2 = 0; i <= len1-len2; i++)
    {
        int k = 0;
        for(j = 0; j < len2; j++)
        {
            if(str1[i+j] != str2[j])
            {
                k = 1;
                break;
            }
        }
        if(k == 0)
        {
            len2++;
            str2[++in] = str1[i];
        }
    }
    return len2;
}
int main()
{
    char str[100];
    gets(str);
    int n = LongSubstr(str);

    printf("%d\n", n);
    return 0;
}