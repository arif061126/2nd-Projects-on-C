#include <stdio.h>

int main(void) {
   int arms;
   int check, rem, sum = 0;
printf("Please input any number: ", arms);
scanf("%i", &arms);
   check = arms;

   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);printf("sum = %i + (%i * %i * %i)\n",sum,rem,rem,rem);
      check = check / 10;
   }

   if(sum == arms)
      printf("%d is an armstrong number.", arms);
   else
      printf("%d is not an armstrong number.", arms);
}
