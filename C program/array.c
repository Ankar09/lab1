#include <stdio.h>
main()
{
    int size,i,j,sum=0,array[10];
    printf("Enter the array size=");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
       scanf("%d",&array[i]);
    }
    //for(i=0;i<size;i++)
    {
       printf("array[0]=%d\n",array[0]);
       printf("array[1]%d\n",array[1]);
       printf("array[2]%d\n",array[2]);
       printf("array[3]%d\n",array[3]);
       printf("array[4]%d\n",array[4]);
    }
    //sum=array[0]+array[1]+array[2]+array[3]+array[4];
     for(j=0;j<=i;j++)
    sum=sum+j;
    printf("the sum of=%d",sum);
}
