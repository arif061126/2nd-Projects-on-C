#include<stdio.h>
main()
{
/*description.....Maximum of 3 Numbers*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/
float x, y, z, max;
/*kernel*/
printf("Please input the numbers x\n");
scanf("%f", &x);
printf("Please input the numbers y\n");
scanf("%f", &y);
printf("Please input the numbers z\n");
scanf("%f", &z);


if (x > y && x > z)
{printf("The Maximum Number is  = %fx\n", x,max);}
else
{
if (y > x && y > z)
{printf("The Maximum Number is  = %fy\n", y,max);}
else
{
if (z > x && z > y)
{printf("The Maximum Number is  = %fz\n", z,max);}}}

return 0;

}
