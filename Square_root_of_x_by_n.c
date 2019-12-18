#include <stdio.h>
//Angel Svirkov 3022328, P4 , 05.05.2015
int main()
{
    float x;
    float y=1.0;
    int i,n,t;
    printf("Give the x:");
    scanf("%f",&x);
    printf("Give the n:");
    scanf("%i",&n);
    if ( n>=0)
    {
       for (i=1; i<=n; i++)
        {
           y=y*x;
        }
    printf("The answer is %f",y);
    }
    if (n<0)
    {
       t=-n;
       for (i=1; i<=t; i++)
        {
           y=1/y;
        }
    printf("The answer is %f",y);
    } return 0;
}
