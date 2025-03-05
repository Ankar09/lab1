#include <stdio.h>
int main(void){
int a,b,c;
	printf("Enter the  number ");
    scanf("%d %d %d",&a,&b,&c);  // Enter  numbers
if(a>b && a<c)
     {
        printf("Smalltest number is a: %d",a);
     }
else if(b<c && b<a)
    {
        printf("Smalltest number is b: %d",b);
    }
else
    {
        printf("Smalltest number is C: %d",c);
    }
return 0;
}

