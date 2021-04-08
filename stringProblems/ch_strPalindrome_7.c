#include<stdio.h>
char lowerString(char str)
{
    if(str >= 97 && str <= 122)
    {
        str -= 97;
        str += 65;
    }
    return str;
}
int main()
{
    char str[100];
    int i, j, k;

    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = lowerString(str[i]);
    }

    for(j = 0, k = i-1; j < i/2; j++, k--)
    {
        if(str[j] != str[k])
        {
            break;
        }
    }

    if(j == (i/2)) printf("Palindrome\n");
    else printf("Not palindrome\n");

    return 0;
}