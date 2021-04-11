#include<stdio.h>
void ret_array(int arr[], int n, int arr2[])
{
    int i;
    for(i = 0; i < n; i++)
    {
        arr2[i] = arr[i] * 2;
    }
}
int main()
{
    int arr[100], n, i, arr2[100];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ret_array(arr, n, arr2);

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}