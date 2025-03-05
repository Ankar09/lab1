#include <stdio.h>
int main(void){
int a,b,c;

	printf("Enter the   number of a= ");
    scanf("%d",&a);
    printf("Enter the   number of b= ");
    scanf("%d",&b);
    printf("Enter the   number of c= ");
    scanf("%d",&c); // Enter  numbers
if(a>b && a>c)
     {
        printf("Greatest number is a: %d",a);
     }
else if(b>c && b>a)
    {
        printf("Greatest number is b: %d",b);
    }
else
    {
        printf("Greatest number is C: %d",c);
    }
return 0;
}
