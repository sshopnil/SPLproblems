#include<stdio.h>
void removechar(char str1[], char c);
int main()
{
    char str1[100], c;

    printf("Enter string: ");
    gets(str1);
    printf("Character to remove: ");
    scanf("%c", &c);

    removechar(str1, c);
    
    printf("After removing %c from string is: %s\n", c, str1);
    
    return 0;
}
void removechar(char str1[], char c)
{
    int len1, i, j;

    for(len1 = 0; str1[len1] != '\0'; len1++);

    for(i = 0; i < len1 && str1[i] != c; i++);

    while(i < len1)
    {
        str1[i] = str1[i+1];
        i++;
    }
}