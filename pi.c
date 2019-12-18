#include<stdio.h>

 double factorial(int a)
{
     double fact=1;
    for(a; a >= 2; a--)
    {
        fact= fact * a;
    }

    return fact;
}


 double sum (double eps)
{
    double dinominator, numerator, fraction, sum=1, u_fact, l_fact, power_2;
    int n=2,m;


    for (n;(numerator)/(dinominator)>= eps ; n++)
    {
        u_fact= factorial(n)*factorial(n);
        l_fact= factorial(2*n);

        m=n;
        for(m,power_2=1.0; m>0; m--)
        {
            power_2=power_2*2;
        }

        numerator=n*power_2*u_fact;
        dinominator= l_fact;

        fraction=numerator/dinominator;

        sum= sum + fraction;
    }

    return sum-3.0;
}
int main()
{
   double epsilon;
   printf("Please enter the value for epsilon:");
   scanf(" %lf",&epsilon);

   printf("The value of Pi=%.9lf",sum(epsilon));

   return 0;
   }
