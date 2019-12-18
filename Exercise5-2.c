#include<stdio.h>


int min2(int a, int b)
{
if (a<b)
{return a;}
else {return b;}
}

int min3(int a, int b, int c)
{return min2(min2(a,b), c);}

main(void)

{
int x, y, c;
int result;
printf(" Please input  three values: \n");
scanf("%d %d %d", &x, &y, &c);
result=min3(x,y,c);

printf("The minnimum is: %d", min2(x,y));
return 0;
}
