#include<stdio.h>
int main()
{
float n1,n2,n3;
float sum,avg;
printf("Enter the Value of n1=");
scanf("%f",&n1);
printf("Enter the Value of n2=");
scanf("%f",&n2);
printf("Enter the Value of n3=");
scanf("%f",&n3);
sum=n1+n2+n3;
avg=sum/3;
printf("Avg=%f",avg);
  return 0;
}
