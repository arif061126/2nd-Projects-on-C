#include <stdio.h>
#include <stdlib.h>
#define n 3

int scanMatrix(float a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf(" a [%i][%i] :",i,j);
            scanf("%f",&a[i][j]);
        }
    }
}

int printMatrix(float a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%4.2f", a[i][j]);
        }
        putchar('\n');
    }
}

float sumMatrix (float a[n][n])
{
    int i,j;
    float sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+= a[i][j];
        }
    }
    return sum;
}
int negativeMatrix(float a[n][n])
{
      int i,j;
 float    negative=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]<0)
            negative++;
        }
    }
    return negative;
}

float minMatrix(float a[n][n])
{
          int i,j;
    int min=a[i][i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]<min) min=a[i][j];
        }
    }
    return min;
}

float meanMatrix(float a[n][n])
{
    return sumMatrix(a)/(n);
}
int main()
{
    float a[n][n];
    int choice,stop=1;
    while (stop==1)
    {
        printf("Choose one option\n1.Give new matrix\n2.Sum of all elements");
        printf("\n3.Number of negatives\n4.min of matrix\n5.mean value\n6.Exit\n\n");
        scanf("%i",&choice);
        switch(choice)
        {
            case 1 : scanMatrix(a); printMatrix(a);break;
            case 2 : printf("\nsum of elements : %f\n", sumMatrix(a)); break;
            case 3 : printf("\nNumber of negative elements: %i\n", negativeMatrix(a)); break;
            case 4 : printf("\nMin of the matrix: %f\n", negativeMatrix(a)); break;
            case 5 : printf("\nMean value: %f\n",meanMatrix(a)); break;
            case 6 : stop=0; return 0;

        }


    }
    return 0;
}
