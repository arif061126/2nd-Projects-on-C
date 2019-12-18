#include<stdio.h>

double factorial(int a)
{
double fact=1;
int i;
for(i=1; i<=a; i++)
{fact*=i;}
return fact;
}

double power(double base, double exp)
{
double product=1, i;
for(i=1; i<=exp; i++)
{product*=base;}
return product;
}

int main(void)

{

//description-------------exponential function
//declaration and definition-----------------
//kernel

double x, eps, numarator, denominator, sum;
int n;

printf("Please input the value of x: ");
scanf("%lf", &x);
//printf("Please input the accuracy of x: \n");
//scanf("%lf", &eps);

sum=1;
eps=0.000000000000000000000000001;

for(n=1; fabs(numarator/denominator)>=eps; n++)
{
numarator=power(x, n);
denominator=factorial(n);
sum+=(numarator/denominator);
}
printf("exponential(%lf)= %0.20lf", x, sum);
return 0;
}

