#include <stdio.h>

int main(){
    int arr[100],n,key,found=0;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to search");
    scanf("%d",&key);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            printf("element found at index%d\n",i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("element not found\n");
    }
    
    return 0;
}