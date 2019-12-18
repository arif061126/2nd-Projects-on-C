#include<stdio.h>

double  power(double base, int pow)//power function
{
    int n;
    float prod=1.0;

    for(n=1;n<=pow;n++)
    {
        prod*=base;
    }

    return prod;
}


//factorial function

double factorial(int a)
{
     double fact=1;
    for(a; a >= 2; a--)
    {
        fact= fact * a;
    }

    return fact;
}



//pi function

 double pi(double eps)
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

//arccos function

double arccos(double x,double eps )
{
double nomirator,denomirator,summand,sum;
int n=0,k=1;
nomirator=1;
denomirator=1;
sum=0;
summand=1;
do{
nomirator=factorial(2*n)*power(x,2*n+1);
denomirator=power(4,n)*factorial(n)*factorial(n)*k;
summand=nomirator/denomirator;
sum=sum+summand;
n++;
k=k+2;


}while(summand>=eps);

return pi(0.0000000001)/2-sum;

}

int main()
{
//kernel/
double n,epes;
printf("please enter a value for x \n");
scanf("%lf",&n);
printf("please enter the exactness for the calculation \n");
scanf("%lf",&epes);
printf("your result =%0.12lf\n",arccos(n,epes));

return 0;
}
