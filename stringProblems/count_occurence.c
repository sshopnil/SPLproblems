#include<stdio.h>
const int SIZE = 50;
void main()
{
    char str[SIZE], ch;
    int count = 0, i;
    printf("Enter a String: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch || str[i] == (ch+32))
        count++;
    }

    printf("Occurence of %c is %d times\n",ch, count);
}