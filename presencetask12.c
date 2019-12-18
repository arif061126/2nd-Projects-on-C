#include <stdio.h>

int main()
{
    int a,b;
    int *c, *d;
    a=20;
    b=70;
    c=&a;
    d=&a;
    printf("Output of a,b,*c, *d: %d, %d, %d , %d\n",a,b,*c,*d);

    a=a+1;
    *c=*c+1;
    *d=*d+1;
    printf("Output a,b,*c, *d =  %d, %d, %d, %d\n",a,b,*c,*d);
    c=&b;
    a=a+1;
     printf("Output a,b,*c, *d =  %d, %d, %d, %d\n",a,b,*c,*d);
     return 0;
}
