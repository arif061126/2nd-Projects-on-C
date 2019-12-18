#include<stdio.h>
#include<math.h>
double dFtB;
int main()

{

/*description.....The perfect Numbers*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/
int ch2,oct,dec;

printf("please choice the conversion form  \n");
printf("(1)for converting from octal to decimal\n");
printf("(2)for converting from decimal to octal\n");
printf("(3)for converting from decimal to B\n");
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



//bN= binaryNumber , dNum= decimal Number, fN= Float Number, dFtB= decimal float to Bianry, dN=decimanl number
if (ch2==3)
{{

int bN(int dNum);
double num;
printf("Enter any fractional decimal number: \n");
scanf("%lf",&num);
double dFtB;
 double dN;



int Int_num=(int)num;
double fN = num-(double)Int_num;

double ans= (double)(bN(Int_num)+dFtB(fN));

printf("\n\n\nEquivalent Binary value : %lf\n\n\n",ans);
}

int bN(int dNum)
{if(dNum<2)
return dNum;

return bN(dNum/2)*10+dNum%2;
}

double dFtB(double dN){

double C_Num=dN*2.0;
double rem= ((int)C_Num)%2;
double fN;
if(C_Num ==1 || C_Num==fN)
return rem/10;

return dFtB(C_Num-rem)/10+rem/10;

}}
}
