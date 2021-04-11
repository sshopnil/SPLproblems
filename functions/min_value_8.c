#include<stdio.h>
void min(int arr[], int n)
{
    int i;
    int min = arr[0]; 
    for(i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d\n", min);
}
int main()
{
    int n, arr[100], i;

    scanf("%d", &n);
    for(i = 0; i < n; i++)scanf("%d", &arr[i]);

    min(arr, n);

    return 0;
}