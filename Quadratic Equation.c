#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
/*root of quadratic equation*/
/*karnel*/
{
double a, b, c, d, x1, x2;
printf("Calulation of the root of quadratic equation\n\a");

printf("Enter the value of a.\n\a");
scanf("%lf", &a);
printf("Enter the value of b.\n\a");
scanf("%lf", &b);
printf("Enter the value of c.\n\a");
scanf("%lf", &c);
d=sqrt((b*b)-(4*a*c));
x1=((-b+d)/(2*a));
x2=((-b-d)/(2*a));
if (d>0)
{
printf("The value of first root, x1= %lf\n", x1);
printf("The value of second root, x2= %lf\n", x2);}
else
{printf("The Error!");}
return 0;
}
