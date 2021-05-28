#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} POINTS;

int check_triangle(POINTS p1, POINTS p2, POINTS p3);

int main()
{
    POINTS a, b, c;
    double area;

    scanf("%f %f", &a.x, &a.y);
    scanf("%f %f", &b.x, &b.y);
    scanf("%f %f", &c.x, &c.y);

    if (check_triangle(a, b, c) == 1)
    {
        printf("They are in the same line\n");
    }
    else
    {
        area = ((a.x*(b.y - c.y)) + (b.x*(c.y - a.y)) + (c.x*(a.y - b.y))) / 2.0;

        printf("The area is %.2lf unit\n", fabs(area));
    }
}

int check_triangle(POINTS p1, POINTS p2, POINTS p3)
{
    int slope1, slope2;

    slope1 = (p2.y - p1.y) / (p2.x - p1.x);
    slope2 = (p3.y - p2.y) / (p3.x - p2.x);

    if (fabs(slope1) == fabs(slope2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// #include <stdio.h>
// #include <math.h>

// int main(void) {
//     float Ax,Ay,Bx,By,Cx,Cy,A,B,C,side,area;
//     printf("hello inPut x,y coords");
//     printf("input 3 numbers for your x coordinates");
//     scanf("%f%f%f",&Ax,&Bx,&Cx );
//     printf("input 3 numbers for your y coordinates");
//     scanf("%f%f%f",&Ay,&By,&Cy);

//     A=sqrt(((Bx-Ax)*(Bx-Ax))+((By-Ay)*(By-Ay)));
//     B=sqrt(((Cx-Bx)*(Cx-Bx))+((Cy-By)*(Cy-By)));
//     C=sqrt(((Ax-Cx)*(Ax-Cx))+((Ay-Cy)*(Ay-Cy)));



//     side=((A+B+C)/2);

//     area=sqrt(side*(side-A)*(side-B)*(side-C));
//     printf("n AREA OF TRIANGLE IS %f",area);

// }
