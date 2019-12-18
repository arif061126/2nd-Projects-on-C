#include<stdio.h>

/* description.....cube volume*/
/*declaration and definition*/

int getCube(int i)
{
  return i*i*i;
}

int main()
/*kernel*/
{
int i=0;
int j=0;


for (i=1; i<11; i++)
{
for (j=1; j<i; j++)
{printf(" ");
}
printf("%i\n", getCube(i));
}

return 0;
}
