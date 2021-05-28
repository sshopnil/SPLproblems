//practice 10 : find length in meter and centimeter

// #include<stdio.h>

// typedef struct 
// {
//     int m;
//     int cm;
// }LENGTH;

// int main()
// {
//     LENGTH len;
//     unsigned int centimeter;
//     double meter;

//     scanf_s("%d%d", &len.m, &len.cm);

//     meter = len.m + (len.cm/100.00);
//     centimeter = (len.m*100) + len.cm;

//     printf("Length in meter: %0.2lf\nLength in centimeter: %u\n", meter, centimeter);

//     return 0;
// }


//practice 11

#include<stdio.h>

typedef struct 
{
    int m;
    int cm;
}LENGTH;

int main()
{
    LENGTH len1, len2, sum;

    scanf_s("%d%d", &len1.m, &len1.cm);
    scanf_s("%d%d", &len2.m, &len2.cm);

    sum.m = len1.m + len2.m;

    sum.cm = len1.cm + len2.cm;

    while(sum.cm >= 100)
    {
        sum.m++;
        sum.cm -= 100;
    }

    printf("The sum is %d meter and %d centimeter\n", sum.m, sum.cm);

    return 0;
}

