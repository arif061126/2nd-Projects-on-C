#include<stdio.h>
main()
{
/*description*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/
double w, x, y, z, max;
/*kernel*/
printf("Please input the numbers w\n");
scanf("%d", &w);
printf("Please input the numbers x\n");
scanf("%d", &x);
printf("Please input the numbers y\n");
scanf("%d", &y);
printf("Please input the numbers z\n");
scanf("%d", &z);


if (w < x)
{max = x;}
else
{max = w;}
if (w > x)
{max = w;}
else
{max = x;}



if (w < y)
{max = y;}
else
{max = w;}
if (w > y)
{max = w;}
else
{max = y;}


if (w < z)
{max = z;}
else
{max = w;}
if (w > z)
{max = w;}
else
{max = z;}



if (x < y)
{max = y;}
else
{max = x;}
if (x > y)
{max = x;}
else
{max = y;}


if (x < z)
{max = z;}
else
{max = x;}
if (x > z)
{max = x;}
else
{max = z;}


if (y < w)
{max = w;}
else
{max = y;}
if (y > w)
{max = y;}
else
{max = w;}


if (y < z)
{max = z;}
else
{max = y;}
if (y > z)
{max = y;}
else
{max = z;}


printf("The Maximum Number is %d\n", max);
return 0;
}
