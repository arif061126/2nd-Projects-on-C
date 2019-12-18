#include<stdio.h>

double factorial(int a)
{
double fact=1;
int i;
for(i=1; i<=a; i++)
{fact*=i;}
return fact;
}

double power (double base, double exp)
{
double product=1, i;
for (i=1; i<=exp; i++)
{product*=base;}
return product;
}

int main(void)

// desrciption--------cos(x)
//declaration and definition-------------
//kernel

{


double x, eps, numarator, denominator, sum;
int n;


printf("Please input the value of x: \n");
scanf("%lf", &x);

//printf("Please input the accuracy of x: \n");
//scanf("%lf", &eps);

eps=0.0000000000000000000000001;
sum=1;

for(n=1; fabs(numarator/denominator)>=eps; n++)
{
numarator=power((-1),n) * power(x, 2*n);
denominator=factorial(2*n);
sum+=(numarator/denominator);
}
printf("cos(%lf)= %0.20lf\n", x, sum);
return 0;
}
