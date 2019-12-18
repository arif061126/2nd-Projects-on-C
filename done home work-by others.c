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


 double Pi (double eps)
{
    double dinominator, numerator,fraction,Pie=1, upper_factorial, lower_factorial,power_of_2;
    int counter=2,counter2;


    for (counter;(numerator)/(dinominator)>= eps ; counter++)
    {
        upper_factorial= factorial(counter)*factorial(counter);
        lower_factorial= factorial(2*counter);

        counter2=counter;
        for(counter2,power_of_2=1.0;counter2>0;counter2--)
        {
            power_of_2=power_of_2*2;
        }

        numerator=counter*power_of_2*upper_factorial;
        dinominator= lower_factorial;

        fraction=numerator/dinominator;

        Pie= Pie + fraction;
    }

    return Pie-3.0;
}
int main()
{
   double epsilon;
   printf("Please enter a value for epsilon:");
   scanf(" %lf",&epsilon);

   printf("The value of Pi=%.9lf",Pi(epsilon));

   return 0;
   }

/*double  power(double base, int pow)
{
    int n;
    float prod=1.0;

    for(n=1;n<=pow;n++)
    {
        prod*=base;
    }

    return prod;
}
/*void arccos(float x)
{
    double a,degree=1,numerator=1,dinominator=1,summation=(Pi(0.00000001))/2;
    float eps;
    printf("Please enter an approximation for epsilon:\n");
    scanf(" %e",&eps);
    int n=0;

    for(n;(numerator/dinominator)>=eps;n++)
    {
        numerator=factorial(2*n) * power(x,(2*n)+1);
        dinominator= power(4,n)power(factorial(n),2)((2*n)+1);
        summation -= (numerator/dinominator);
    }
    a=summation;
    degree= (a*180.0)/Pi(0.00000001);
    printf("arccos(%lf)=%.9e (the value is in radians)\nin degrees=%lf" , x, summation,degree);

    return 0;
}

void arctan( float z)
{
    float k=0.0;
    float sum=0.0, dino=1,numer=1,sign=1.0;
    float epsil=0.00001;
    for(k;1.0/(2.0*k+1.0)>=epsil;k++)
    {
        numer= sign*power(z,(2*k+1));
        dino= 2*k+1;
        sum= sum + numer/dino;

        sign*=-1.0;
    }
     printf("arctan(%f)= %.9f",z,sum);
    return 0;
}


int main()
{
    /*double epsilon;
    printf("Please enter the value of epsilon:\n");
    scanf(" %lf",&epsilon);
    printf("Pi=%.11lf", Pi(epsilon));*/
   //arctan(0.5);

    //return 0;
