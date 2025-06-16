#include <stdio.h>

int main(){
    int arr[100],sum=0,n;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter %d elements",&n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    
    printf("sum of all the elements is%d\n",sum);
        
    

    return 0;
}