#include<stdio.h>
int main()
{
    char str[100];
    int nums = 0, alp = 0, chars = 0, i;

    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            alp++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            nums++;
        }
        else chars++;
    }
    printf("Alphabets = %d\nDigits = %d\nSpecial Characters = %d\n", alp, nums, chars);
}