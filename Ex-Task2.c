#include<stdio.h>

/*This is Comment*/

int main()
{
float workHr = 0;
printf("Please input your work hours: ");
scanf("%f", &workHr);
printf("Please input your hourly pay: ");
float hourlyPay = 0;
scanf("%f", &hourlyPay);
float weeklyPay = 0;
weeklyPay = workHr * hourlyPay;
float avgMonthlyPay = 0;
avgMonthlyPay = weeklyPay* 4.348;
if (avgMonthlyPay > 800)
{avgMonthlyPay = avgMonthlyPay* 0.6;
printf("This is your salary: %f\n", avgMonthlyPay);}
return 0;
}
