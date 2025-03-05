#include<stdio.h>

int fun1(void);
int fun2(void);
int fun3(void);

int x;  //gobal variable

void main(){
    x = 10;
    printf("x = %d\n", x);
    printf("x = %d\n", fun1());
    printf("x = %d\n", fun2());
    printf("x = %d\n", fun3());
}

 fun1(void){
    x = x + 10;   //global
}
 fun2(void){
    int x;
    x = 1;  //local
    return x;
}
 fun3(void){
    x = x + 10;  //local
}

