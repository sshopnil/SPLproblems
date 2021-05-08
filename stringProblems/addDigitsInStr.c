#include<stdio.h>
const int SIZE = 50;

int main()
{
    char str[SIZE];
    int i, sum = 0, num;

    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            num = str[i] - 48;
            sum += num;
        }
    }
    printf("%d\n", sum);
}