#include <stdio.h>

int main(){
    int n;
    printf("write the value of n");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j;j--){
        if(j>i){
        printf(" ");
            }
            else if(j<=i){
                printf("*");
            }
        }

        printf("\n");
    }
    return 0;
}