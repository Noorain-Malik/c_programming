#include <stdio.h>

int main(){
    int row1,row2,column1,column2;
    printf("write no of rows of first matrix");
    scanf("%d",&row1);
    printf("write no of columns of first matrix");
    scanf("%d",&column1);
    printf("write no of rows of second matrix");
    scanf("%d",&row2);
    printf("write no of columns of second matrix");
    scanf("%d",&column2);
    if(column1==row2){
        int a[row1][column1],b[row2][column2];
        for (int  i = 0; i < row1; i++)
    {
        for (int j  = 0; j < column1; j++)
        {
            scanf("%d",&a[i][j]);
            
    }
    }
    for (int  i = 0; i < row2; i++)
    {
        for (int j  = 0; j < column2; j++)
        {
            scanf("%d",&b[i][j]);
            
    }
    }
    for (int  i = 0; i < row1; i++)
    {
        for (int j  = 0; j < column1; j++)
        {
            printf("%d\t",a[i][j]);
            
    }
printf("\n");
}
for (int  i = 0; i < row2; i++)
    {
        for (int j  = 0; j < column2; j++)
        {
            printf("%d\t",b[i][j]);
            
    }
    printf("\n");
    }
    int c[row1][column2],sum;
    for (int  i = 0; i < row1 ;i++)
    {
        for (int j  = 0; j < column2; j++)
        {
            sum=0;
            for (int k = 0; k < column1; k++)
            {
                sum+=a[i][k]*b[k][j];

            }
            
        c[i][j]=sum;    
    }
    }
    for (int  i = 0; i < row1; i++)
    {
        for (int j  = 0; j < column2; j++)
        {
            printf("%d\t",c[i][j]);
            
    }
printf("\n");
}
    }
    else{
        printf("matrix multiplication is not possible  here");
    }

    return 0;
}