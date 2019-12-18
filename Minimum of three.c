#include<stdio.h>
int main()
{
/*description.....Minimum of 3 Numbers*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/
float x, y, z, min;
/*kernel*/
printf("Please input the numbers x\n");
scanf("%f", &x);
printf("Please input the numbers y\n");
scanf("%f", &y);
printf("Please input the numbers z\n");
scanf("%f", &z);


if (x < y && x < z)
{printf("The Minimum Number is  = %fx\n", x,min);}
else
{
if (y < x && y < z)
{printf("The Minimum Number is  = %fy\n", y,min);}
else
{
if (z < x && z < y)
{printf("The Minimum Number is  = %fz\n", z,min);}}}

return 0;

}
