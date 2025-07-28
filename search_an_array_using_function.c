#include <stdio.h>
int search(int[],int,int);

int search(int a[],int b,int c){
    
 for (int i = 0; i < b; i++)
    {
        if(a[i]==c){
        return i+1;
    }
}
    return 0;
    

    
}

int main(){
    int arr[]={2,3,4,5};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    int num;
    printf("write num to search");
    scanf("%d",&num);
   int e= search(arr,size,num);
   if(e){
    printf("num presentat %d",e);
   }
   else{
    printf("not found");
   }
    
    return 0;
}