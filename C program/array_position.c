#include <stdio.h>
main()
{
    int size,serch,i,array[5];
    printf("Enter the array size=");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
       scanf("%d",&array[i]);
    }
    printf("Enter the value of searce=");
    scanf("%d",&serch);
     for(i=0;i<size;i++)
    {
        if(array[i]==serch)

          printf("The array position is =%d\n",i);

    }
}
