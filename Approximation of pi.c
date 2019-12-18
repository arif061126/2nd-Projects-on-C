#include<stdio.h>

double factorial(int a)
{
    double fact=1.0;
    for (a; a>=2; a--)
    {
        fact=fact*a;
    }
return fact;
}

double upper_fractorial(int b)
{
    double ufact=1.0, eps, denominator, nominator;
    eps=0.0000000001;
    for (b=2; nominator/denominator>=eps; b++)
    {
        ufact=factorial(b)*factorial(b);
    }
return ufact;
}
double lower_fractorial(int b)
{
    double lfact=1.0, eps, denominator, nominator;
    eps=0.0000000001;
    for (b=2; nominator/denominator>=eps; b++)
    {
        lfact=factorial(2*b);
    }
return lfact;
}
double power_2(int c)
{
    double p_2=1.0;
    for (c=2; c>0; c++)
    {
        p_2=p_2*2;
    }
return p_2;
}

int main(void)

{
/* desription: Approximate of pi*/
/*declaration and defination*/
/*kernel*/

int b;
double eps, sum, denominator, nominator, power_2, lower_fractorial, upper_fractorial, pie;

//printf("Please input the vale of x: ");
//scanf("%lf", &x);
//printf("Please input the accuracy of eps: ");
//scanf("%lf", &eps);
eps=0.0000000001;
sum=1;
//denominator=1;
//nominator=1;
//fac=1;
//pow=1;


do
{
nominator=b*power_2*upper_fractorial;
denominator=lower_fractorial;
sum=sum+nominator/denominator;
pie=sum-3.0;
}while(nominator/denominator>=eps);
printf("The absolute value of Pi: %0.12lf\n", pie);
return 0;
}
