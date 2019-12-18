#include <stdio.h>

typedef struct student
{
    char first_name[30];
    char last_name[30];
    unsigned matr_number;
}  STUDENT;

int main()
{
    STUDENT array_of_students[10] = {{"John", "Doe",7654321},
                                     { "Jane", "Doe"}};// without need to say STRUCT STUDENT STUD1-
    printf("%s\n", array_of_students[0].last_name);
    array_of_students[1].matr_number = 1234567;
    return 0;
}




