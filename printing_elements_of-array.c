#include <stdio.h>

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        printf("write the %d element of array\n", i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n", a[i]);
        
    }

    return 0;
}