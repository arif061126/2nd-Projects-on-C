#include<stdio.h>

double arccos(double z,double eps2){
    double difference=0.0;
    double pie=3.141592654;
    double sum=z;
    double summand=0.0;
    double m = z * z;
    double numerator = z;
    double denominator = 1.0;
    int k=2, n=1, a=4, b=3;
    //series calculation
    do{
        numerator = numerator * m * k * (k -1);
        denominator = denominator * a * b * n * n;
        summand = numerator / denominator;
        sum = sum + summand;
        k=k+2;
        n=n+1;
        a=a*4;
        b=b+2;
    }while(summand>=eps2);
    difference = (pie/2.0) - sum;
    return difference;
}

int main(void)

{
/* desription: Approximate of arccos*/
/*declaration and defination*/
/*kernel*/

double z, eps2;

printf("Please input the vale of z: ");
scanf("%lf", &z);
printf("Please input the accuracy of eps: ");
scanf("%lf", &eps2);

printf("arccos(%lf)= %0.12lf\n", z, arccos(z, eps2));
return 0;
}
