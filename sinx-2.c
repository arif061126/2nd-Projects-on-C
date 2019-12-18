#include<stdio.h>
double factorial(double n){
double fac=1,i=1;
for(i;i<=n;i++){
    fac=fac*i;
}
return fac;
}


double sin(double x, double eps){
double numernitor=x,denumernitor=1,sum=0,summand=1;
double i=1;
double k=0;
int sign=-1;
do{numernitor=numernitor*i;
denumernitor=factorial(2*k+1);
summand=numernitor/denumernitor;
sum=sum+(sign*summand);
i=x*x;
k=k+1;
sign*=-1;
printf("(no)%lf \t",numernitor);
printf("(den)%lf \t",denumernitor);

}while(summand>=eps );
return fabs (sum);


}
int main()
{

    double n,epes;
    printf("please input a value for n and epes \n");
    scanf("%lf %lf",&n,&epes);
    printf("%0.30lf",sin(n,epes));
    return 0;
}
