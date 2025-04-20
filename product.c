#include <stdio.h>

int main(){
    int num1 , num2 , product = 1;
    printf("write num1 \n");
    scanf("%d" , &num1);
    printf("write num2 \n");
    scanf("%d" , &num2);
    product = num1*num2;
    printf("the sum of %d and %d is %d" , num1,num2,product);
    return 0;
}