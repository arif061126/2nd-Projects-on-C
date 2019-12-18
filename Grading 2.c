#include<stdio.h>
main()
{
/*description-----Grading*/
/*declaration and defination*/
int i, Grading;
printf("Please input the result:\n");
scanf("%i", &Grading);
switch (Grading)
{
case 1: (i<50); printf("grade 5.0"); break;
case 2: (i>=50); printf("grade 4.0"); break;
case 3: (i>55); printf("grade 3.7"); break;
case 4: (i>60); printf("grade 3.3"); break;
case 5: (i>65); printf("grade 3.0"); break;
case 6: (i>70); printf("grade 2.7"); break;
case 7: (i>75); printf("grade 2.3"); break;
case 8: (i>80); printf("grade 2.0"); break;
case 9: (i>85); printf("grade 1.7"); break;
case 10: (i>90); printf("grade 1.3"); break;
case 11: (i>95); printf("grade 1.0"); break;
default: printf("Wrong value in inputing Numbers....Please Check again, Thanks a lot.\n");
}
return 0;
}
