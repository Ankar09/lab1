#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
            printf("The Number is Negative=%d",num);
    else if(num >0)
            printf("The Number is Positive=%d",num);

    else
        printf("You entered 0");
    return 0;
}
