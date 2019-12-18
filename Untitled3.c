#include<stdio.h>
main ()
{
char name, o;
printf("Write your name?\n\a");
scanf("%s", &name);
printf("My name is %s.\n", &name);
printf("Are you ok?\n\a");
scanf("%s", &o);
printf("I am %s,thanks.\n",&o);
return 0;
}
