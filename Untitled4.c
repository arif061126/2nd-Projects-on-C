/********************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 30

int fraction[max],integer[max];

void d2b();
void b2d();

int main()
{
 int i,cnum,ch;
 float num,f;
 clrscr();
 while(1)
 {
  printf("YOU HAVE FOLLOWING CHOICES : \n");
  printf("1.CONVERT DECIMAL TO BINARY\n");
  printf("2.CONVERT BINARY TO DECIMAL\n");
  printf("3.EXIT\n\n");
  printf("ENTER YOUR CHOICE : ");
  scanf("%d",&ch);
  printf("\n");
  switch(ch)
  {
   case 1:
   d2b();
   break;
   case 2:
   b2d();
   break;
   case 3:
   exit(1);
   default:
   printf("YOU HAVE ENTERED A WRONG CHOICE\n");
  }
  printf("\nPRESS ANY KEY TO CONTINUE...\n");
  getch();
  clrscr();
 }

 getch();
 return 1;
}


void d2b()
{
 float num,f;
 int i,cnum,tag;
 printf("ENTER ANY DECIMAL NUMBER : ");
 scanf("%f",&num);
 printf("\n");
 f=num-(int)num;
 for(i=0;i<max;i++)
 {
  f=f-(int)f;
  fraction[i]=(int)(f*2);
  f*=2;
 }

 cnum=(int)num;
 for(i=max-1;i>=0;i--)
 {
  if(cnum%2==0)
  {
   integer[i]=0;
  }
  else
   integer[i]=1;
  cnum/=2;
 }

 printf("BINARY EQUIVALENT = ");
 tag=0;

 for(i=0;i<max;i++)
 {
  if(integer[i]||tag)
  {
   tag=1;
   printf("%d",integer[i]);
  }
 }
 printf(".");

 for(i=0;i<7;i++)
  printf("%d",fraction[i]);

 printf("\n");

}


void b2d()
{
 double num,fnum,result=0;
 long inum,i=0,a=0;
 printf("ENTER ANY BINARY NUMBER : ");
 scanf("%lf",&num);
 printf("\n");

 inum=num;
 fnum=num-(long)num;
 printf("%ld\t%lf\n",inum,fnum);

 while(inum)
 {
  result+=(inum%10)*pow(2,i++);
  inum/=10;
 }

 for(i=0;i<max;i++)
 {
  a--;
  fnum*=10;
  if(fnum>=1)
  {
   fnum-=1;
   result+=pow(2,a);
  }
 }
 printf("DECIMAL EQUIVALENT = %lf\n",result);
 return 0;
}

/******************************************************************************/
