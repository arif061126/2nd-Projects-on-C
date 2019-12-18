#include <stdio.h>

int main()
{
    float x, y, s,p, total;
    printf("Hello Alex. How do you feel today?\n");
    printf("Give me x, Alex:" );
    scanf("%f", &x);
    printf("Give me y:\n" );
    scanf("%f", &y);
    p = x*y;
    s = x*y;
    total = s*s + p*(s-x)*(p+y);
    printf("The result total is:%f",total);

    char c; scanf("%c",&c);
    return 0 ;
}
