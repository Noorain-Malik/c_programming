#include <stdio.h>

int main(){
    int sum=0;
    int a[5];
    for(int i=0;i<5;i++){
        printf("write the %d element of array\n", i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("the %d element of array is %d\n", i+1,a[i]);
        
    }
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("the sum of elements of array is %d",sum);
    return 0;
}