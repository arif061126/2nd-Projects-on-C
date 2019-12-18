#include <stdio.h>

typedef struct Complex
{
    double real;
    double img;
} Complex;

int main()
{
     Complex z3 ,z1 ,z2;
     printf("Give me real part of z1 :");
     scanf("%lf",&z1.real);
     printf("Give me img part of z1 :");
     scanf("%lf",&z1.img);
     printf("Give me real part of z2 :");
     scanf("%lf",&z2.real);
     printf("Give me img part of z2 :");
     scanf("%lf",&z2.img);

     z3.real= z1.real + z2.real;
     z3.img= z1.img +z2.img;

     printf("\n The summation is :%.1lf %+.1lfj", z3.real,z3.img);

}
