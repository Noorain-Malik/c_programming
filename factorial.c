#include <stdio.h>

int main(){
   
    int product = 1;
    int n;
    printf("give the value of n\n");
    scanf("%d" , &n);
    int i = 1;
    while(i<=n){
        product = product *i;
        i++;
    }
         printf("the value of %d factorial is %d\n" , n , product);
return 0;
}