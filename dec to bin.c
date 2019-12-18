#include<stdio.h>

int main(void)

if (ch==3){     int ch3;
system("color B3");
printf("    ____            _____    ___  ________   \n");
printf("   |       |       |     |  |   |    |      \n");
printf("   |____   |       |     |  |___|    |       \n");
printf("   |       |_____  |_____|  |   |    |       \n");


printf("please choice the conversion form  \n");
printf("(1)for converting from decimal/floating to binary \n");
printf("(2)for converting from binary to decimal/floating \n");
scanf("%i",&ch3);
if(ch3==1){

float binaryFract = 0, k =0.1f, fractional, temp1, binaryTotal, f;

long int decimalNumber,remainder,quotient,integral, binaryInt = 0;

    int binaryNumber[100],i=1,j;


    printf("Enter any decimal / floating number: ");

    scanf("%ld",&decimalNumber);
 scanf("%ld, %f",&f);

    quotient = decimalNumber;

integral = (int)f;

    //Separating the fractional value from the variable
    fractional = f - (int)f;

    printf("integral: %i\n",integral);
    printf("fractional: %f\n",fractional);

    while(quotient!=0){

         binaryNumber[i++]= quotient % 2;

         quotient = quotient / 2;

    }


    printf("\nEquivalent binary value of decimal number %d: ",decimalNumber);

    for(j = i -1 ;j> 0;j--)

         printf("%d",binaryNumber[j]);

    //Loop for converting Fractional value to binary
    if(k>0.00000001)
    {
        temp1 = fractional *2;
        binaryFract = binaryFract+((int)temp1)*k;
        fractional = temp1 - (int)temp1;
        k = k / 10;
    }

    // Combining both the integral and fractional binary value.

    binaryTotal = binaryNumber[j] + binaryFract;
    printf("\nbinary equivalent = %f\n", binaryTotal);
}


