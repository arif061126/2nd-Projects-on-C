#include <stdio.h>
#include <math.h>


double factorial(int n) // CALCULATING FACTORIAL OF INPUT
{
  if(n <= 1)
    return(1.0);
  else
    return(n * factorial(n-1.0));
}

double power (double x, int n) /* Calculate x^n , where n can be negative*/
{
    //declarations
    double prod;
    int i;
    //kernel
    prod=1;
    for (i=1; i<=abs(n); i++)
    {
        prod=prod*x;
    }
    if (n>0)
      return prod;
    else
      return 1/prod;
}


int main()
{
    double x;
    int k;
    int terms;
    double exp,sum;

   printf("Please insert the values of x in degrees:");
    scanf("%lf",&x);
    printf("Please insert the precision terms:");
    scanf("%i2",&terms);


    for(k=0; k< terms;k++)
    {

      sum=pow(x,k)/factorial(k);
      exp =exp + sum;
    }


    printf("exp=%lf",exp);
    return 0;






}
