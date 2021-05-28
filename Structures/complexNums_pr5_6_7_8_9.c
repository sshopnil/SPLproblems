//practice 5 ouput real and imaginary number from user
// #include<stdio.h>

// typedef struct
// {
//     float real, img;
// }COMPLEX;

// int main()
// {
//     COMPLEX num;
//     char op;

//     scanf_s("%f%f", &num.real, &num.img);

//     if(num.img < 0)
//     {
//         op = '-';
//         num.img *= -1;
//     }
//     else
//     {
//         op = '+';
//     }
//     printf("%0.2f%c%0.2fi\n", num.real, op, num.img);
//     return 0;
// }


// //practice 6 calculate modulus and argument from complex number

// #include<stdio.h>
// #include<math.h>

// typedef struct
// {
//     float real, img;
// }COMPLEX;

// int main()
// {
//     COMPLEX num;

//     scanf_s("%f%f", &num.real, &num.img);

//     float mod = sqrt(pow(num.real, 2) + pow(num.img, 2));
//     float arg = atan(num.img/num.real);
    
//     printf("MODULUS: %.4f\nARG: %0.4f\n", mod, arg);
//     return 0;
// }


//practice 7 add and substract complex numbers

// #include<stdio.h>

// typedef struct
// {
//     float real, img;
// }COMPLEX;

// int main()
// {
//     COMPLEX num1, num2, sum, sub;
//     char op1 = '+', op2 = '+', op3 = '+', op4='+';
//     scanf_s("%f%f", &num1.real, &num1.img);
//     scanf_s("%f%f", &num2.real, &num2.img);

//     sum.real = num1.real + num2.real;
//     sum.img = num1.img + num2.img;

//     sub.real = num1.real - num2.real;
//     sub.img = num1.img - num2.img;

//     if(num1.img < 0)
//     {
//         op1 = '-';
//         num1.img *= -1;
//     }
//     if(num2.img < 0)
//     {
//         op2 = '-';
//         num2.img *= -1;
//     }
//     if(sum.img < 0)
//     {
//         op3 = '-';
//         sum.img *= -1;
//     }
//     if(num1.img < 0)
//     {
//         op4 = '-';
//         sub.img *= -1;
//     }

//     printf("(%.0f%c%.0fi)+(%.0f%c%.0fi) = %.0f%c%.0fi\n", num1.real, op1, num1.img, num2.real, op2, num2.img, sum.real, op3, sum.img);

//     printf("(%.0f%c%.0fi)-(%.0f%c%.0fi) = %.0f%c%.0fi\n", num1.real, op1, num1.img, num2.real, op2, num2.img, sub.real, op4, sub.img);

//     return 0;
// }



//practice 8 multiply complex numbers

// #include<stdio.h>

// typedef struct
// {
//     float real;
//     float imag;
// }COMPLEX;

// int main()
// {
//     COMPLEX num1, num2, mul;
//     char op1 = '+', op2 = '+', op3 = '+';

//     scanf_s("%f%f", &num1.real, &num1.imag);
//     scanf_s("%f%f", &num2.real, &num2.imag);

//     mul.real = ((num1.real*num2.real)+(num1.imag*num2.imag*-1));
//     mul.imag = (num1.real * num2.imag) + (num1.imag*num2.real);

//     if(num1.imag < 0)
//     {
//         op1 = '-';
//         num1.imag *= -1;
//     }
//     if(num2.imag < 0)
//     {
//         op2 = '-';
//         num2.imag *= -1;
//     }
//     if(mul.imag < 0)
//     {
//         op3 = '-';
//         mul.imag *= -1;
//     }

//     printf("(%.0f%c%.0fi)*(%.0f%c%.0fi) = %.0f%c%.0fi\n", num1.real, op1, num1.imag, num2.real, op2, num2.imag, mul.real, op3, mul.imag);

//     return 0;
// }


//practice 9 divide complex numbers

#include<stdio.h>

typedef struct
{
    float real;
    float imag;
}COMPLEX;

int main()
{
    COMPLEX num1, num2, div;

    scanf("%f%f", &num1.real, &num1.imag);
    scanf("%f%f", &num2.real, &num2.imag);

    if(num1.real == 0 && num2.imag == 0)
    {
        printf("Error!\n");
    }
    else
    {
        div.real = (num1.real * num2.real + num1.imag * num2.imag) / (num2.real * num2.real + num2.imag * num2.imag);

        div.imag = (num1.imag * num2.real - num1.real * num2.imag) / (num2.real * num2.real + num2.imag * num2.imag);

        if(div.imag < 0)
        {
            printf("Division is (%.2f%.2fi)\n", div.real, div.imag);
        }
        else
        {
            printf("Division is (%.2f+%.2fi)\n", div.real, div.imag);
        }
    }

    return 0;
}

