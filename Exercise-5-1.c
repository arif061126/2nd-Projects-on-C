#include<stdio.h>


float min2(int a, int b)
{
if (a<b)
{return a;}
else {return b;}
}

main(void)

{
int x, y;
int result;
printf(" Please input  two values: \n");
scanf("%d %d", &x, &y);
// result=min2(x,y);

printf("The minnimum is: %d", min2(x,y));
return 0;
}

