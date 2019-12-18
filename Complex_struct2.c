#include <stdio.h>

typedef struct Complex
{
    double real;
    double img;
} Complex;
Complex inputComplex()
{
    Complex z;
     printf("Give me real part of number :");
     scanf("%lf",&z.real);
     printf("Give me img part of number :");
     scanf("%lf",&z.img);
     return z;
}
void  PrintComplex(Complex z)
{
     printf("The complex number is:%lf %lfj",z.real, z.img);
}

int main()
{
     Complex z,z3 ,z1 ,z2,sum;
     /*
     printf("Give me real part of z1 :");
     scanf("%lf",&z1.real);
     printf("Give me img part of z1 :");
     scanf("%lf",&z1.img);
     printf("Give me real part of z2 :");
     scanf("%lf",&z2.real);
     printf("Give me img part of z2 :");
     scanf("%lf",&z2.img); */

  //z1=inputComplex();
 // z2=inputComplex();
  z=inputComplex();

  //sum.real=z1.real +z2.real;
    //sum.img=z1.img +z2.img;

    // printf("\n The summation is :%.1lf %+.1lfj", sum.real,sum.img);
    PrintComplex(z);
    return 0;
 }

