#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f, g,h,i,x,y;
    float p;

    printf("Enter the value of p\n");
    scanf("%f",&p);
    a=(int) p;
    //printf("%d\n",a);
    b=a%1000000000;
    c=b%100000000;
    d=c%10000000;
    e=d%1000000;
    f=e%100000;
    g=f%10000;
    h=g%1000;
    i=h%100;
    x=i%10;
    y=x%10;
    if(a>1000000000)
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f,g,h,i,x,y);
    else if(a>100000000)
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a,c,d,e,f,g,h,i,x,y);
    else if(a>10000000)
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a,d,e,f,g,h,i,x,y);
    else if(a>1000000)
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a,e,f,g,h,i,x,y);
    else if(a>100000)
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",a,f,g,h,i,x,y);
    else if(a>10000)
        printf("%d\n%d\n%d\n%d\n%d\n%d",a,g,h,i,x,y);
    else if(a>1000)
        printf("%d\n%d\n%d\n%d\n%d",a,h,i,x,y);
    else if(a>100)
        printf("%d\n%d\n\n%d\n%d",a,i,x,y);
    else if(a>10)
        printf("%d\n%d\n\n%d",a,x,y);
    else if (a<10)
        printf("%d\n\n%d",a,y);
}
