#include<stdio.h>

/* description.....cube volume*/
/*declaration and definition*/
int getCube(int a){
    return a*a*a;
}

main()
/*kernel*/
{
int i,j,x,v;

printf("Please input a definite value: ");
scanf("%i",&v);

for (i=1; i<v; i++)
{
x=getCube(i);

for (j=1; j<i; --j)
    {printf(" ");
}
printf("%i\n", x);}

return 0;
}
