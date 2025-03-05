#include <stdio.h>
main() {

    int i,n, sum;

    scanf("%d",&n);

    sum = 0;

    for ( i = 1; i <= n; i=i+2)
    {
        sum = sum + i*i;
    }


   printf("The sum of. square of first %d odd numbers is %d",n, sum);

   return 0;
}
