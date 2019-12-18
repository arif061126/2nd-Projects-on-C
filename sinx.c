#include<stdio.h>
/*double absolutevalue(double value)
{
    if(value < 0)
    value *= -1;
    return value;
}*/

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
/* desription: Approximate of sin(x)*/
//declaration and defination/
//kernel/
int n;
double x, eps, denominator, numarator, sum, summand;

printf("Please input the value of x: ");
scanf("%lf", &x);

//printf("Please input the accuracy of eps: ");
//scanf("%lf", &eps);

eps=0.00000000000000001;
//sign=-1;
denominator=1;
numarator=1;
sum=x;

for(n=1; fabs(numarator/denominator)>=eps; n++)
{
//sign=sign*(-1);
numarator=power((-1),n)*power(x,(2*n+1));
denominator=factorial(2*n+1);
sum+=(numarator/denominator);
}
printf("sin(%lf)= %0.20lf\n", x, sum);
return 0;
}
