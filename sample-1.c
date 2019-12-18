
#include<stdio.h>
#include<conio.h>
void main()
            {
            int i,n,j,ch;
            float x,t,s,r;
            char c='y';

            do
            {
                printf("\n1.SINE SERIES");
                printf("\n2.COSINE SERIES");
                printf("\n3.EXPONENTIAL SERIES");
                printf("\n ENTER THE CHOICE\n");
                scanf("%d",&ch);
                switch(ch)
                {
                  case 1:
                             printf("\nENTER THE LIMIT");
                             scanf("%d",&n);
                             printf("\nENTER THE VALUE OF x:");
                             scanf("%f",&x);
                             r=((x*3.1415)/180);
                             t=r;
                             s=r;
                             i=2;
                             for(j=2;j<=n;j++)
                             {
                                    t=(t*(-1)*r*r)/(i*(i+1));
                                    s=s+t;
                                    i=i+2;
                             }
                             printf("\nSUM OF THE GIVEN SINE SERIES IS %4f",s);
                             break;
                  case 2:
                             printf("\nENTER THE LIMIT ");
                             scanf("%d",&n);
                             printf("\nENTER THE VALUE OF x:");
                             scanf("%f",&x);
                             r=((x*3.14)/180);
                             t=1;
                             s=1;
                             i=1;
                             for(j=2;j<=n;j++)
                             {
                                    t=((-1)*t*r*r)/(i*(i+1));
                                    s=s+t;
                                    i=i+2;
                             }
                             printf("\n SUM OF THE COSINE SERIES IS %f",s);
                             break;
                  case 3:
                             printf("\nENTER THE LIMIT");
                             scanf("%d",&n);
                             printf("\nENTER THE VALUE OF x:");
                             scanf("%f",&x);
                             t=1;
                             s=1;
                             for(i=1;i<n;i++)
                             {
                                    t=(t*x)/i;
                                    s=s+t;
                             }
                             printf("\nSUM OF EXPONENTIAL SERIES IS %f",s);
                             break;
                  default:
                             printf("\n WRONG CHOICE");
                }
                printf("\n DO U WANT TO CONTINUE Y/N\n");
                scanf("%s",&c);
            }
            while(c=='y');
            getch();
            }
