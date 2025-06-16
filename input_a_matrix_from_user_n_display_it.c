#include <stdio.h>

int main(){
    int mat [10][10],rows,columns;
    printf("enter rows and columns");
    scanf("%d %d",&rows,&columns);
    printf("enter elements");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
printf("matrix\n");

   for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    } 

    return 0;
}