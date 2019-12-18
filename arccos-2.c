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

double pie (double eps)
{
double dinominator, numerator, fraction, pie=0;
int n=1;

for (n; numerator/dinominator>= eps ; n++)
{
        numerator=n * power(2,n) * factorial(n) * factorial(n);
        dinominator= factorial(2*n);
        fraction=numerator/dinominator;
        pie= pie + fraction;
}

    return pie-3.0;
}

int main(void)

{
/* desription: Approximate of arccos*/
/*declaration and defination*/
/*kernel*/

double x, eps, denom, nom, sum=(pie(0.0000000000000000000000001)/2), sum1=x, summand=1;
int p=0;
printf("Please input the value of x: ");
scanf("%lf", &x);
printf("Please input the accuracy of eps: ");
scanf("%lf", &eps);


//eps=0.0000000000000000000000001;


for(p; fabs(summand)>=eps; p++)
{
nom=factorial(2*p) * power(x,((2*p)+1));
denom=power(4,p) * factorial(p) * factorial(p) * ((2*p)+1);
summand=nom/denom;
sum=sum-summand;
}
printf("arccos(%lf) = %0.20lf\n", x, sum);
return 0;
}
