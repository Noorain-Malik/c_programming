#include <stdio.h>

int main(){
    int arr[2][3], transpose[3][2];
    for (int  i = 0; i < 2; i++)
    {
        for (int j  = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
            
    }
}
for (int  i = 0; i < 3; i++)
    {
        for (int j  = 0; j < 2; j++)
        {
            transpose[i][j]=arr[j][i];
            
    }
}
for (int  i = 0; i < 3; i++)
    {
        for (int j  = 0; j < 2; j++)
        {
            printf("%d\t",transpose[i][j]);
            
    }
    printf("\n");
}

    return 0;
}
/* or 
using single matrix
for (int  i = 0; i < 3; i++)
    {
        for (int j  = 0; j < 2; j++)
        {
           printf("%d\t",arr[j][i]);
            
    })*/