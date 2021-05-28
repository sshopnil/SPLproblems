//practice 12 showing time interval in hour, minute and second separately

// #include<stdio.h>

// typedef struct 
// {
//     unsigned int hour, min, sec;
// }TIME;

// int main()
// {
//     TIME t;
//     double hours, minutes;
//     unsigned int seconds;

//     scanf_s("%u%u%u", &t.hour, &t.min, &t.sec);

//     hours = t.hour + (t.min/60.00) + (t.sec/3600.00);
//     minutes = (t.hour*60.00) + t.min + (t.sec/60.00);
//     seconds = (t.hour*3600) + (t.min*60) + t.sec;

//     printf("Time interval in hour: %.2lf\n", hours);
//     printf("Time interval in minute: %.2lf\n", minutes);
//     printf("Time interval in second: %u\n", seconds);

//     return 0;
// }

//practice 13: findi out time difference

#include<stdio.h>

typedef struct 
{
    int hour, min, sec;
}TIME;

int main()
{
    TIME diff, interval1, interval2;

    scanf_s("%d%d%d", &interval1.hour, &interval1.min, &interval1.sec);
    scanf_s("%d%d%d", &interval2.hour, &interval2.min, &interval2.sec);

    diff.hour = interval1.hour - interval2.hour;
    diff.min = interval1.min - interval2.min;
    if(diff.min < 0)
    {
        diff.min += 60;
        diff.hour--;
    }
    diff.sec = interval1.sec - interval2.sec;
    if(diff.sec < 0)
    {
        diff.sec += 60;
        diff.min--;
    }
    printf("%d %d %d\n", diff.hour, diff.min, diff.sec);

    return 0;
}