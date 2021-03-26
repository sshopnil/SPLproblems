#include <stdio.h>

int main()
{
    int n, m, a[100], b[100], i, temp[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    if (m > n)
    {
        printf("Array A: ");

        for (i = 0; i < m; i++)
        {
            temp[i] = a[i];
            a[i] = b[i];
            printf("%d ", a[i]);
        }
        printf("\nArray B: ");

        for (i = 0; i < n; i++)
        {
            b[i] = temp[i];
            printf("%d ", b[i]);
        }
    }
    else
    {
        printf("Array A: ");
        
        for(i = 0; i < n; i++)temp[i] = a[i];
        for (i = 0; i < m; i++)
        {
            a[i] = b[i];
            printf("%d ", a[i]);
        }

        printf("\nArray B: ");
        
        for (i = 0; i < n; i++)
        {
            b[i] = temp[i];
            printf("%d ", b[i]);
        }
    }
    return 0;
}