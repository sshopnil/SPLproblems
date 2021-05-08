#include <stdio.h>
const int SIZE = 50;
int main()
{
    char str[SIZE];
    int i, find, j, len, count = 0;

    gets(str);

    for (len = 0; str[len] != '\0'; len++); //length

    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[j] == str[i])
            {
                find = j;

                while (str[find] != '\0')
                {
                    str[find] = str[find + 1];
                    find++;
                }
            }
        }
    }

    printf("%s", str);

    return 0;
}