#include<stdio.h>
#include<math.h>

int main()
{

/*description.....The perfect Numbers*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/
int ch2,oct,dec;

printf("please choice the conversion form  \n");
printf("(1)for converting from octal to decimal\n");
printf("(2)for converting from decimal to octal\n");
scanf("%o",&ch2);
if(ch2==1){
printf("please enter the octal number\n");
scanf("%o",&oct);
printf("the conversion is equal:%d",oct);}

if(ch2==2)

{printf("please enter the decimal number \n");
scanf("%d",&dec);

printf("the conversion result:%o",dec);
    }

    return 0;
}
