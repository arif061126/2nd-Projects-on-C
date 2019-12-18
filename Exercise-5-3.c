#include <stdio.h>
#include <stdlib.h>

double cosine(double x, double eps){

    double sum = 1; // already set to the first summand
    double summand = 0;
    double numerator = 1;
    double denominator = 1;
    int k = 2;
    int sign = -1;

    //starting to calculate the second summand
    do{
        numerator = numerator * x * x;
        denominator = denominator * (k-1) * k; // 4! = 2! * 3 * 4
        summand = numerator/denominator;
        sum = sum + sign * summand;
        k = k + 2;
        sign = sign * -1;
    }while(summand >= eps);
    return sum;
}

int main()
{
  double x, eps;
  printf("Calculation of cos(x)\n");
  printf("=====================\n");
  printf("\nPlease enter values for x and epsilon.\n");
  printf("x: ");
  scanf("%lf", &x);
  printf("eps: ");
  scanf("%lf", &eps);

  printf("\ncos(%g) = %.15g\n", x, cosine(x, eps) ); //converts double to either e or f form

  return 0;
}
