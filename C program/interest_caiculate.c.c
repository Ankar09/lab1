#include<stdio.h>
main()
{
    float p=5000.00;
    float year=10.00;
    float amount=0.0;
    float interest=11.00;
    float interest2;
    interest2=interest/100;
    printf("%f\n",interest2);
    float y=(1+interest2);
    printf("%f\n",y);
    for(year=1;year<=10;year++)
    {

    }
    amount=p*(pow(y,year));
    printf("%f",amount);
}
