#include<stdio.h>
void swap_num(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_num(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}