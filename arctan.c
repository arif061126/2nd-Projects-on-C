#include<stdio.h>
int main(void)

{
/* desription: Approximate of arctan*/
/*declaration and defination*/
/*kernel*/
int sign;
double x, eps, denominator, nominator, sum;

printf("Please input the vale of x: ");
scanf("%lf", &x);
printf("Please input the accuracy of eps: ");
scanf("%lf", &eps);
//eps=0.000000000001;
sign=-1;
denominator=1;
nominator=x;
sum=x;

do
{
nominator=nominator*x*x;
denominator=denominator+2;
sum=sum+(sign*nominator/denominator);
sign=sign*(-1);
}while(fabs(nominator/denominator)>=eps);
printf("arctan(%lf)= %0.12lf\n", x, sum);
return 0;
}
