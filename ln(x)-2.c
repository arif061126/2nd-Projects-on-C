#include<stdio.h>
int main(void)

{
//description-------------natural logarithmic or ln function
//declaration and definition-----------------
//kernel

int sign, n;
double x, eps, denominator, nominator, sum;

printf("Please input the vale of x: ");
scanf("%lf", &x);
//printf("Please input the accuracy of eps: ");
//scanf("%lf", &eps);

n=2;
eps=0.000000000001;
sign=-1;
denominator=1;
nominator=x-1;
sum=x-1;

do
{
//nominator=nominator*(x-1);
denominator*=n;
sum=sum+(sign*nominator/denominator);
sign=sign*(-1);
n++;
}while(fabs(nominator/denominator)>=eps);
printf("ln(%lf)= %0.12lf\n", x, sum);
return 0;
}
