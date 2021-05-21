#include<stdio.h>

long int find_nCr(int n, int r)
{
    if(n<r)
    {
        return 0;
    }
    else if(n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return find_nCr(n-1,r-1) + find_nCr(n-1, r);
    }
}

int main()
{
    int n, r;

    scanf("%d%d", &n, &r);
    if(r>n || r < 0 || n < 0)
    {
        printf("Please enter n >= r >= 0\n");
    }
    else 
    {
        printf("nCr: %ld\n", find_nCr(n,r));
    }
}