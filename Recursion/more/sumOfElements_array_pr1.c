#include<stdio.h>
const int SIZE = 100;

int sumOfArr(int arr[], int n)
{
    if(n <= 0)
    return 0;

    return (sumOfArr(arr, n-1) + arr[n-1]);
}


int main()
{
    int arr[SIZE], n, i;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("%d\n", sumOfArr(arr, n));
}