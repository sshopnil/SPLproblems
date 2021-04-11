#include<stdio.h>
void sort_array(int arr[], int n, int arr2[])
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (n - 1 - i); j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        arr2[i] = arr[i];
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

    sort_array(arr, n, arr2);

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}