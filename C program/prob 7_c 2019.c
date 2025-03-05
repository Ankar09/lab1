#include<stdio.h>

int x[5][5]= {{11,22,33,22,11},
              {12,0,1,2,2},
              {13,15,3,1,2},
              {14,17,20,3,2},
              {25,36,43,51,0}};
int i,j,k,l,tmp,big,p;

void main(){
        for(i=0;i<=4;i++){
            for(j=0;j<=4;j++){
                printf("%d  ", x[i][j]);
            }
            printf("\n");
        }
    for(i=0;i<=4;i++)
        for(j=0;j<=4;j++)
            for(k=j;k<=4;k++)
                for(l=k;l<=4;l++)
                    x[k][l] = x[k][l] + 1;
    printf("\n\n\n");

    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }
}
