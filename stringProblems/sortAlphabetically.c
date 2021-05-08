#include<stdio.h>

const int SIZE = 50;
int main()
{
    char str1[SIZE];
    int i, temp, j, len;

    gets(str1);

    for(len = 0; str1[len] != '\0'; len++);

    for(i = 0; i < len; i++)
    {
        for(j = 0; j < (len-1-i); j++)
        {
            if(str1[j] > str1[j + 1])
            {
                temp = str1[j];
                str1[j] = str1[j+1];
                str1[j+1] = temp;
            }
        }
    }

    printf("%s\n", str1);

    return 0;
}