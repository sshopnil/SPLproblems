#include<stdio.h>
#include<math.h>

typedef struct
{
    int x, y;
}CORDINATES;

int main()
{
    CORDINATES first, second;
    double sum;
    printf("Enter x1, y1: ");
    scanf_s("%d %d", &first.x, &first.y);
    printf("Enter x2, y2: ");
    scanf_s("%d %d", &second.x, &second.y);

    sum = sqrt(pow((second.x - first.x), 2) + pow((second.y - first.y), 2));

    printf("Distance : %0.2lf unit\n", sum);

    return 0;
}