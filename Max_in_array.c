#include <stdio.h>
#define N 10




int printNegative(int array[], int length)
{
    int negativeCount=0;
    int i=0;
    for(i;i<length;i++)
    {
        if(array[i]<0)
        {
            printf("%i\n",array[i]);
            negativeCount++;
        }
    }
    return negativeCount;
}

int findmax(int array[], int length)
{
    int max;
    max=array[0];
        int i=1;
        for(i=1;i<length;i++)
        {
            if(array[i]>max)
            {
                max=array[i];
            }
        }

    return max;
}

int main()

{
   int i=0;
   int ans;
   int array[i];
    for (i=0 ; i<5 ; i++)
    {
        printf("v[%i]:",i);
        scanf("%i",&array[i]);
    }
    ans = findmax(array,5);
    printf("Max is %i",ans);
    return 0 ;
}
