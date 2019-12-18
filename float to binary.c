#include<stdio.h>

double fN;
int bN(int dNum);
double dFtB (double dN);

//bN= binaryNumber , dNum= decimal Number, fN= Float Number, dFtB= decimal float to Bianry, dN=decimanl number
main()




{
double num;
printf("Enter any fractional decimal number: \n");
scanf("%lf",&num);
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

if(C_Num ==1 || C_Num==fN)
return rem/10;

return dFtB(C_Num-rem)/10+rem/10;

}
