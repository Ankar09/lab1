#include <stdio.h>


int main()
{
    int num1, num2,num3,a,b, maximum;


    printf("Enter any two numbers: ");
    scanf("%d%d%d", &num1, &num2,&num3);

    a= (num1 > num2 ) ? num1 : num2;
    b= (a > num3 ) ? a : num3;

    printf("\nMaximum = %d\n", b);



    return 0;
}




