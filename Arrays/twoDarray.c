// //SPL array 17th problem solution
// #include<stdio.h>
// const int SIZE = 100;
// int main()
// {
//     int n, i, j, arr[SIZE][SIZE], sum = 0; //n must be an odd number

//     scanf("%d", &n);

//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for(i = 0; i <= n/2; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//             if(j == n-1 || (i == 0 && j < n/2) || j == n/2 || i == n/2)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     for(; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//             if(j == 0 || (i == n-1 && j >= n/2) || j == n/2)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("%d\n", sum);

//     return 0;
// }





//SPL array 18th problem solution

// #include<stdio.h>
// const int SIZE = 100;

// int main()
// {
//     int n, i, j, arr[SIZE][SIZE], sum = 0; // n must be an odd number

//     scanf("%d", &n);

//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//             if(j % 2 != 0 || i % 2 != 0)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("%d", sum);

//     return 0;
// }


//SPL array 19th problem solution (unsolved)
#include<stdio.h>
const int SIZE = 100;

int main()
{
    int n, m, i, j, arr[SIZE][SIZE], temp;

    scanf("%d", &n);
    scanf("%d", &m);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m-1; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[i][j+1];
            arr[i][j+1] = temp;
        }
    }
    printf("\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
