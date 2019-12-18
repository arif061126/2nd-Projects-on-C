#include<stdio.h>
main()
{
/*description*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/

int i, numb1, numb2, GCD;
printf("Please, input the two numbers \n");
scanf("%f %f", &numb1, &numb2);
for(i=1; i<=numb1 && i<=numb2; ++i);
{if(numb1 % i ==0 && numb2 % i ==0) GCD=i;}
printf("GCD of %f and %f     is", numb1, numb2, GCD);
return 0;
}
