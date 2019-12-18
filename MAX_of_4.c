#include <stdio.h>


//Function 1
unsigned int max2 (unsigned int a, unsigned int b)
{
    if (a>b)
      return a;
    else
      return b;
}

//Function 2
unsigned int max3 (unsigned int a, unsigned int b,unsigned int c)
{
    return max2(a,max2(b,c));
    /*
    if (a>max2(b,c)  // THIS IS JUST AN ALTERNATIVE
        return a;
    else
        return max(b,c);
    */
}

//Function 3
unsigned int max4 (unsigned int  a, unsigned int b, unsigned int c,unsigned int d)
{
    return max2(a,max3(b,c,d));
}


int main()
{
    //DECL:
   unsigned  a,b,c,d;

  //Input from user:
  printf("Please input 4 numbers");
  scanf("%u %u %u %u",&a,&b,&c,&d);
  printf("The max number is %u",max4(a,b,c,d));
  return 0;
}
