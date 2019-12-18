#include<stdio.h>
#include<math.h>

main()
{
/*description.....Middle of an Interval*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/
float a, b, mid, m;
/*kernel*/
printf("Please input the numbers a\n");
scanf("%f", &a);
printf("Please input the numbers b\n");
scanf("%f", &b);
printf("Please input middle of the numbers: \n");
scanf("%f", &mid);

m = (a + b)/2;

if (mid == m)
{printf("The Middle of an Interval, m: %f\n", m);}
else
{printf("The given number is not the middle of the interval.\n");}

return 0;
}
