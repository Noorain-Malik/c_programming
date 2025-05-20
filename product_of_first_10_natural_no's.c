#include <stdio.h>

int main(){
    int i,product=1;
    for(i=1;i<=10;i++){
        product = product*i;
    }
    printf("the product of 10 natural no.s is%d", product);
    return 0;
}