#include<stdio.h>
int main()

/*description- Hello World!.....*/
/*declaration and definition*/
/*kernel*/

{
int d, m;
char name;
printf("Please enter your name:%c", name);
scanf("%s",&name);
printf("Please, insert your date of birth: \n\a");
scanf("%i",&d);
printf("Please, insert your month of birth: \n\a");
scanf("%i",&m);
if(d==11&&m==5)
{printf("Happy birthday to you, %c\n", name);}
else
{
if (d>11&&m>05)
{printf("Please, check for your birthday later, thanks a lot.\n\a");}
else
{
if (d<11&&m<05)
{printf("A wish of your late Happy Birthday, sorry it is too late.");}
else
{printf("Invalid input.");}}}
return 0;
}
