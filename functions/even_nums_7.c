#include<stdio.h>
void evens(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int arr[100], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)scanf("%d", &arr[i]);
    evens(arr, n);
    return 0;
}