#include <stdio.h>

struct student_t_distribution   /*declaration of a structure with
                                  three components*/
{
    char first_name[30];
    char last_name[30];
    unsigned matr_number;
};

struct student stud1 = {"John", "Doe" , 7654321};  /*definition and inside
                                                initialization of a structure variable */
