#include <stdio.h>

int main()
{
    int array[3][3]= { {1,2,3},{4,5,6},{7,8,9}};

        int *pointer = &array[0][0];
        int (*pointerToArray)[3]= &array[2];
        printf("4: %i\n", *(*(array + 1)));

}
