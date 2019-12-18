#include<stdio.h>

double factorial(double n)
{
double fac=1,i=1;
for(i;i<=n;i++)
{
    fac=fac*i;
}
return fac;
}

double power(double base, double exp)
{
double i, product=1;

for(i=1;i<=exp;i++)
{
    product *= base;
}
return product;
}

int main(void)

{
/* desription: Approximate of arctan*/
/*declaration and defination*/
/*kernel*/
int sign, m=1;
double x, eps, denominator, nominator, sum;

printf("Please input the vale of x: ");
scanf("%lf", &x);
//printf("Please input the accuracy of eps: ");
//scanf("%lf", &eps);
eps=0.000000000001;
sign=-1;
denominator=1;
nominator=x;
sum=x;

do
{
nominator=power(x, (2*m+1));
denominator=denominator*factorial(2*m+1);
m++;
sum=sum+(sign*nominator/denominator);
sign=sign*(-1);

}while(fabs(sign*(nominator/denominator))>=eps);
printf("sin(%lf)= %0.12lf\n", x, sum);
return 0;
}
