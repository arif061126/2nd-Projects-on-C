#include<stdio.h>
#define N 3

int main(void)
{
   /* description */
   /* example two dimensional array implementing a matrix
      and initialisation and output of an identity matrix */
   /* declarations and definitions */
   printf("Please input the value: \n");
   unsigned i, j;
   double sum;
   double A[N][N]; /* definition of a two dimensional array */
   /* kernel */
   for (i = 0; i < N; i++) /* for all rows - outer loop */
      for (j = 0; j < N; j++) /* for all columns - inner loop */
         {scanf("%lf",&A[i][j]);
sum+=A[i][j];}
   for (i = 0; i < N; i++) /* for all rows - outer loop */
   {
//sum[i][j]=A[i][j]*2;
      for (j = 0; j < N; j++) /* for all columns - inner loop */

   //      printf("%0.1lf ", sum[i][j]);

   printf("%.0lf\t",A[i][j]);
         putchar('\n'); /* new line printed after a complete row */
   }printf("the sum:%lf",sum);
   return 0;
}
