#include <stdio.h>

int main(){
    int num1 , num2 , sum = 0;
    printf("write num1 \n");
    scanf("%d" , &num1);
    printf("write num2 \n");
    scanf("%d" , &num2);
    sum = num1+num2;
    printf("the sum of %d and %d is %d" , num1,num2,sum);
    return 0;
}