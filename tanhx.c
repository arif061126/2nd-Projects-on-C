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

double x, eps, denom, nom, sum=2*x, sum1, PI, summand;
int p=0;
printf("Please input the value of x: ");
scanf("%lf", &x);
//printf("Please input the accuracy of eps: ");
//scanf("%lf", &eps);

//summand=0;
PI=pie(0.0000000000000000000000001);
denom=1;
nom=0;
//sum=2*x;
sum1=4/((power(PI,2)) + 4 * power(x,2));
eps=0.0000000000000000000000001;


for(p=1; fabs(summand)>=eps; p++)
{
nom=4 / (power((2*p+1), 2) * power(PI,2));
denom=1 + (4*(power(x,2))/(power((2*p+1), 2) * power(PI,2) ));
summand=(nom/denom);
sum1+=summand;
sum=2*x*sum1;
}
printf("PI------%lf\n",PI);
printf("nom--------%lf\n",nom);
printf("denom--------%lf\n",denom);
printf("summand----------%0.40lf\n",summand);
printf("sum1-------------%lf\n",sum1);
printf("sum--------------%lf\n",sum);
printf("tanh(%lf) = %0.20lf\n", x, sum);
return 0;
}
