#include <stdio.h>

int main()
{
  int Number, i, Sum = 0;

  printf("\nPlease Enter any positive integer \n");
  scanf("%d",&Number);

  Sum = (Number * (Number + 1) * (2 * Number + 1 )) / 6;

  for(i =1; i<=Number;i++)
  {
    if (i != Number)
       printf("%d^2 + ",i);

    else
       printf("%d^2 = %d ",i, Sum);
  }
}
