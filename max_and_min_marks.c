#include <stdio.h>
#define size 5

int main(){
    int marks[size],max,min;
    for(int i=0;i<size;i++){
        printf("write marks obtained in subject %d\n", i+1);
        scanf("%d",&marks[i]);
    }
    max =marks[0];
    min=marks[0];
    for ( int i = 0; i <size; i++)
    {
        if(marks[i]>max){
            max=marks[i];
        }
        if(marks[i]<min){
            min=marks[i];
        }
    }
    printf("maximum marks obtained are %d\n", max);
    printf("minimum marks obtained are%d\n" ,min);
    
    
    
    return 0;
}