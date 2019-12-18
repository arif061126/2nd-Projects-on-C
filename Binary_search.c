#include <stdio.h>

typedef struct student
{
char name[30];
unsigned matrNo;
} student;

/* global variables */
student participants[]=
{
{"John Doe", 111},
{"Bob Baumeister", 139},
{"Jane Smith", 140},
{"Jack Archer", 141},
{"Johnny Mahony", 167},
{"Simon Anthony", 170},
{"Marylin Anderson", 174},
{"Melanie Thomson", 181},
{"Sydney Core", 183},
{"Steve Smith", 186}
};
int noOfStud = 10;

int searchByNo(unsigned matrNo)
{
    int left=0, right = noOfStud -1; //arrays start from 0 to 9 in our case
    while (left<=right)
    {
        int middle=(left+right)/2;
        if (participants[middle].matrNo==participants[matrNo].matrNo)
        {
            return middle;
        }
        else
            if(matrNo>participants[middle].matrNo)
        {
            left=middle+1;
        }
        else
        {
            right=middle-1;
        }
    }
    return -1;
}

int main()
{
    int matrNo,index;
    printf("\nGive matrNo\n");
    scanf("%i",&matrNo);
    index=searchByNo(matrNo);
    printf("\nStudent with matriculation number %i: %s", matrNo, participants[index].name);
}
