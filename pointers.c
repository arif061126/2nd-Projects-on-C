  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
      int x;
      int *point;

      point=&x;

      printf("Please enter an integer value");
      scanf("%d",&x);

      printf("Printing value using pointer %i",*point);
    getchar();
  }
