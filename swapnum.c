#include <stdio.h>

int main(){
    int num1 , num2 , c;
    printf("write num1 \n");
    scanf("%d" , &num1);
    printf("write num2 \n");
    scanf("%d" , &num2);
    c=num1-num2;
    num1=num1-c;
    num2=num2+c;
    printf("the value of num1 is %d and the value of num2 is %d" , num1 , num2);
    return 0;
}