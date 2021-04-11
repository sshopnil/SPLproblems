#include<stdio.h>
const int ROW = 50;
const int COL = 50;

void inputMatrix(int a[ROW][COL], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void ScalarMultiply(int a[ROW][COL], int input, int b[ROW][COL], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            b[i][j] = a[i][j] * input;
        }
    }
}

void ShowMultiply(int a[ROW][COL], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[ROW][COL], n, mat2[ROW][COL], i , j;
    scanf("%d %d", &i, &j);
    inputMatrix(mat, i, j);
    scanf("%d", &n);
    ScalarMultiply(mat, n, mat2, i, j);
    ShowMultiply(mat2, i, j);

    return 0;
}