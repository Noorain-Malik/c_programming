#include <stdio.h>

int main(){
    int n , prime;
    printf("enter a number");
    scanf("%d" , &n);
    if (n==0||n==1){
        printf("%d is not a prime no" , n);
    }

    for(int i=2;i<=n;i++){
     if (n%i==0 &&n!=2){
        prime=0;
     }
    else {
            prime = 1; 
        }
    }
    
    if (prime==0){
        printf("%d is not a prime no" , n);
    }
     else if (prime ==1){
        printf("%d is a prime no" , n);
     }
    return 0;
}