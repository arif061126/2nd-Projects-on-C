#include<stdio.h>
int main()
{

/*description.....The perfect Numbers*/
/*Calculation of the maximum of three numbers*/
/*declaration and definition*/



  int n,i,sum=0;

  printf("Enter the upper limit: ");
  scanf("%d",&n);

  printf("Enter the lower limit: ");
  scanf("%d",&i);

  while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==n)
      printf("%d is a perfect number",i);

  return 0;
}
