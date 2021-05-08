#include<stdio.h>

void takeInput(float arr[], int n);
double CalcMean(float arr[], int n);
void Deviation(float arr1[], int n, float arr2[], double mean);

int main()
{
    float arr[100], dev[100], sum = 0;
    int n, i;
    double sqrt, variance;

    takeInput(arr, n);

    double MEAN = CalcMean(arr,n);

    Deviation(arr, n, dev, MEAN);

    for(i = 0; i < n; i++)
    {
        dev[i] *= dev[i];
        sum += dev[i];
        printf("%f ", dev[i]);
    }
    printf("%lf", MEAN);
    variance = sum / (n-1);

    sqrt = variance * 0.5;

    printf("%.2lf\n", sqrt);
    return 0;
}

void takeInput(float arr[], int n) // takes input from user
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
}

double CalcMean(float arr[], int n) // returns mean
{
    int i;
    double mean, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    mean = sum / n;
    return mean;
}
void Deviation(float arr1[], int n, float arr2[], double mean)
{
    int i; 
    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i] - mean;
    }
}