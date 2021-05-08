#include<stdio.h>
void Get_Number_And_Base(int *number, int *base) // takes number and base from user
{
    scanf("%d%d", number, base);
}
long int Convert_Number(int number, int base) //converts the number toi it's base
{
    long int temp = 0, power = 1;
    int n;
    while(number != 0)
    {
        n = number % base;
        temp += n * power;
        power *= 10;
        number /= base; 
    }
    return temp;
}
void Show_Converted_Number(int number, int base) //display result
{
    long int display_result = Convert_Number(number,base);
    printf("%ld\n", display_result);
}
int main()
{
    int N, B;
    Get_Number_And_Base(&N, &B);
    if(B == 2 || B == 8 || B == 10 || B == 16)
    {
        Show_Converted_Number(N, B);
    }
    else
    {
        printf("Base not within proper range\n");
    }
    
    return 0;
}