#include <stdio.h>

int main()
{
    int n, arr[100], i, j, arr2[100], m = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(arr[i] == arr2[j])
            break;
        }
        if(m == j)
        {
            arr2[m] = arr[i];
            m++;
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}