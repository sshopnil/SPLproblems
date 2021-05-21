#include<stdio.h>

int reverse(int n, int temp)
{
    if(n == 0)
    return temp;

    temp = temp * 10 + n % 10;

    return reverse(n/10, temp);
}

int main()
{
    int num;
    scanf("%d", &num);

    if(reverse(num, 0) == num)
    {
        printf("%d is palindrome\n", num);
    }
    else
    {
        printf("Not a palindrome number\n");
    }
    return 0;
}