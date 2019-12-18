#include <stdio.h>

float min2 (float a, float b)
{
    if (a<b)
        return a;
    else
        return b;
}
float min3(float a, float b , float c)
{
    return min2(a,min2(b,c));
}
float min4(float a, float b, float c, float d)
{
    return min2(a,min3(b,c,d));
}
int main()
{
    float a, b, c, d;
    printf("Please input four numbers:\n");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    printf("The minumum is %f",min4(a,b,c,d));
    return 0;
}
