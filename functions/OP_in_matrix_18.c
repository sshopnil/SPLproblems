#include<stdio.h>
const int ROW = 3;
const int COL = 5;

void inputMatrix(int a[ROW][COL])
{
    int i, j;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void ScalarMultiply(int a[ROW][COL], int input, int b[ROW][COL])
{
    int i, j;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            b[i][j] = a[i][j] * input;
        }
    }
}

void ShowMultiply(int a[ROW][COL])
{
    int i, j;
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[ROW][COL], n, mat2[ROW][COL];
    
    inputMatrix(mat);
    scanf("%d", &n);
    ScalarMultiply(mat, n, mat2);
    ShowMultiply(mat2);

    return 0;
}