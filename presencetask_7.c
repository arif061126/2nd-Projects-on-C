#include <stdio.h>
#define SIZE 3
int tensorProduct(int a[SIZE],int b[SIZE], int c[SIZE][SIZE])
{
    int i,j;
    for (i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
        c[i][j] = a[i]*b[j];
        }
    }
}

int printMatrix(int c[SIZE][SIZE])
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        for (j=0;j<SIZE;j++)
        {
            printf("%i\t", c[i][j]);
        }
        putchar('\n');
    }
}

int main ()
{

    int a[SIZE] = {3,7,-1};
    int b[SIZE] = {9,-2,3};
    int c[SIZE][SIZE]={};
    tensorProduct(a,b,c);
    printMatrix(c);
}
