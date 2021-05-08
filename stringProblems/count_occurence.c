//occurence of a character in a string

// #include<stdio.h>
// const int SIZE = 50;
// void main()
// {
//     char str[SIZE], ch;
//     int count = 0, i;
//     printf("Enter a String: ");
//     gets(str);
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     for(i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i] == ch || str[i] == (ch+32))
//         count++;
//     }

//     printf("Occurence of %c is %d times\n",ch, count);
// }

//occurence of a substring in a string

#include<stdio.h>
int const SIZE = 50;

int main()
{
    char str1[SIZE], str2[SIZE];
    printf("Enter full string: ");
    gets(str1);

    printf("Enter sub-string: ");
    gets(str2);

    int count = 0, i, j, len;

    for(len = 0; str2[len] != '\0'; len++);

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str2[j] != str1[i+j])
            break;
        }
        if(str2[j] == '\0')
        {
            count++;
        }
    }

    printf("'%s' occured %d times\n", str2, count);
}