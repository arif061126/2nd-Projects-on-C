#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
char name[30];
unsigned matrNo;
} student;
student participants[]=
{
{"John Doe", 111},
{"Sydney Core", 183},
{"Marylin Anderson", 174},
{"Johnny Mahony", 167},
{"Jack Archer", 141},
{"Simon Anthony", 170},
{"Jane Smith", 140},
{"Steve Smith", 186},
{"Bob Baumeister", 139},
{"Melanie Thomson", 181},
};
int noOfStud = 10;
void insertionSort(student participants[], int length  );

int main()

{
    int i;
    printf("Not sorted\n");
    for(i=0;i<noOfStud;i++)
    {

        printf("%i\n",participants[i].matrNo);
    }
    insertionSort(participants,noOfStud);
     printf("Sorted\n");
     for(i=0;i<noOfStud;i++)
    {

        printf("%i\n", participants[i].matrNo);
    }

    return 0;
}

void insertionSort(student participants[], int length  )
{

    int i,j;
    student next;
    for (i=1;i<length;i++)

        {
            next.matrNo=participants[i].matrNo;
            j = i-1;

        while ((next.matrNo < participants[j].matrNo) && (j >= 0))

            {
                participants[j+1].matrNo = participants[j].matrNo;
                j = j-1;
            }


        participants[j+1].matrNo = next.matrNo;
        }
}
