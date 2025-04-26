#include <stdio.h>

int main(){
    int num ;
    printf("write the number");
    scanf("%d" , &num);
    if (num!=0)
    { 
        if(num>0){
            printf("you entered a positive number");
        }
        else{
            printf("you entered a negative number");
        }
         }
      else {
        printf("you entered zero");
      }   
    return 0;
    
}