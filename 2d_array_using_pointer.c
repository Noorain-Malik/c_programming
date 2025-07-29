//printing 2d array using pointer
#include <stdio.h>

int main(){
    int arr[3][3];
    printf("enter the elements of matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j < 3 ;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int (*ptr)[3]=arr;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j < 3 ;j++)
        {
            printf("%d",  *(*(arr+i)+j));
        }
        printf("\n");
        
    }
    return 0;
}