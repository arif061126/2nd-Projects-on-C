#include<stdio.h>
int main()
{
    /*description*/
    /*Calculation of the maximum of three numbers*/
    /*declaration and definition*/
    float w, x, y, z;
    /*kernel*/
    printf("Please input the numbers w: ");
    scanf("%f", &w);
    printf("\nPlease input the numbers x: ");
    scanf("%f", &x);
    printf("\nPlease input the numbers y: ");
    scanf("%f", &y);
    printf("\nPlease input the numbers z: ");
    scanf("%f", &z);


    if (w > x && w > y && w > z)
    {
        printf("\nThe Maximum Number is w = %f\n", w);
    }
    else if (x > w && x > y && x > z)
    {
        printf("\nThe Maximum Number is x = %f\n", x);
    }
    else if (y > w && y > x && y > z)
    {
        printf("\nThe Maximum Number is y = %f\n", y);
    }
    else
    {
        printf("\nThe Maximum Number is z = %f\n", z);
    }

return 0;

}
