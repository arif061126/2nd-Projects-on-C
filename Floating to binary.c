#include<stdio.h>
#include<math.h>

main(void)
{

/*description.....The perfect Numbers*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/
int ch2, dec, d2b, b=2, fract, i, bin;

printf("please choice the conversion form  \n");
printf("(2)for converting from floating / decimal to binary\n");
scanf("%i",&ch2);

// if(ch2==1){
// printf("please enter the octal number\n");
// scanf("%o",&oct);
// printf("the conversion is equal:%d",oct);}

if(ch2==2)

{printf("please enter the floating / decimal number \n");
scanf("%f",&dec);

for (i=1; dec>=i; i++)
{
   bin =(dec*b);
   dec=dec*b;
   if (dec==0||dec>dec)
   {
      printf("the conversion result:%i",dec);
   }
   else {bin = (dec*b);}
}}}
