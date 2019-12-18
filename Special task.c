#include<stdio.h>

main(void)

{
/*description.....FoP Exercise-4-2*/
/*...........*/
/*declaration and definition*/

int i, j, n, h,s;

printf("please, input any number: ");
scanf("%i", &n);

h=n/2;
s=n/2;

for (i=1; i<n; i+=2)
{
for (s=1; s<h+n-i; s++)
{printf(" ");}

for (j=1; j<=i; j+=2)
{

printf("%4d", j);}
printf("\n");}

return 0;
}


//*   *
   //***
  //*****
 //*******
//*********///
