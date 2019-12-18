#include<stdio.h>

int main()

{
/* desription: Sum of Fraction 2*/
/*declaration and defination*/
/*kernel*/

unsigned int n,k;
int x=2, denominator, nominator, sum;
float eps;

//printf("Please input the value of x: ");
//scanf("%lf", &y);
//printf("Please input the accuracy of eps: ");
//scanf("%lf", &eps);
x=y;

denominator=1.0;
nominator=2.0;
eps=0.0000000001;

do
{
for(n=0;x=x*n;n++)
{
for(k=1; k<=n; k++)
{
printf("%d", k);
}}
nominator=nominator*x;
denominator=denominator*1;
sum=x+nominator/denominator;
}while (fabs(nominator/denominator)>=eps);
printf("arctan(%lf)= %lf\n", y, sum);
return 0;
}
