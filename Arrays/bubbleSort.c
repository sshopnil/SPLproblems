#include <stdio.h>

int main()
{
    int m, arr[100], i, temp, j;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < (m - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}