// #include<stdio.h>
// void swap_num(int* a, int* b) //function that will take variables by reference
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     swap_num(&a, &b);

//     printf("%d %d\n", a, b);
//     return 0;
// }
#include<stdio.h> // pass by value
void swap_nums(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b);
}
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    
    swap_nums(a, b);
    return 0;
}