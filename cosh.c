#include<stdio.h>

double factorial(int a)
{
int i;
double fact=1;
for(i=1;i<=a;i++)
{
    fact *= i;
}
 return fact;
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
/* desription: Approximate of cosh*/
/*declaration and defination*/
/*kernel*/

double x, eps, denom, nom, sum;
int p;

printf("Please input the value of x: ");
scanf("%lf", &x);

//printf("Please input the accuracy of eps: ");
//scanf("%lf", &eps);
sum=1;

eps=0.000000000000000000000000001;


for(p=1; fabs(nom/denom)>=eps; p++)
{
nom=power(x,(2*p));
denom=factorial(2*p);
sum=sum+(nom/denom);
}
printf("cosh(%lf) = %0.20lf\n", x, sum);
return 0;
}
