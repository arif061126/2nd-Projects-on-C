#include<stdio.h>

/* description......Triangle*/
/*declaration and definition*/

main()

/*kernel*/
{

float a, b, c;

printf("Input first side of the triangle, a: ");
scanf("%f", &a);
printf("Input second side of the triangle, b: ");
scanf("%f", &b);
printf("Input third side of the triangle, c: ");
scanf("%f", &c);

if (a==b==c)
{printf("The triangle is equilateral.");}
else
{
if (a==b || b==c || c==a)
{printf("The triangle is isosceles.");}
else
{
if (a!=b && b!=c && c!=a)
{printf("The triangle is Scalene.");}
}}
return 0;
}
