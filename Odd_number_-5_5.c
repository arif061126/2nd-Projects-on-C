#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=-5.0; i<=5.0 ; i++)
    {
        if ((i%2 ==1) || (i%2==-1))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
