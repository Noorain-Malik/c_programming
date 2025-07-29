#include <stdio.h>
void reverse(int* a,int b){
    for (int i = 0; i <b-1; i++)
    {
        for (int j = 0; j < b-1; j++)
        {
            if(*(a+j)>*(a+j+1)){
                int temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }
        
    }
    
}
int main(){
    int arr[]={3,5,1,2,7};
    int* ptr=arr;
    reverse(ptr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    

    return 0;
}