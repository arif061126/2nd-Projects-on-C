#include<stdio.h>

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

//description-------------natural logarithmic or ln function
//declaration and definition-----------------
//kernel

double x, eps, numarator, denominator, sum;
int n;

printf("Please input the value of x: ");
scanf("%lf", &x);
//printf("Please input the accuracy of x: \n");
//scanf("%lf", &eps);
numarator=1;
denominator=1;
sum=(x-1);
eps=0.000000000000000000000000001;

for(n=1; fabs(numarator/denominator)>=eps; n++)
{
numarator=(power((-1),(n+1)) * power((x-1),n)); printf("nom- %lf\n", numarator);
denominator*=power(n,1); printf("dem- %lf\n", denominator);
sum+=(numarator/denominator); printf("%lf\n", sum);
}
printf("%lf\n", numarator);
printf("dem- %lf\n", denominator);
printf("%lf\n", sum);
printf("ln(%lf)= %0.20lf", x, sum);
return 0;
}
