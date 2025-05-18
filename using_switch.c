#include <stdio.h>

int main (){
    int choice;
    printf("enter a number 1,2or 3\n");
   scanf("%d",&choice);
   switch(choice){
    case 1:
    printf("salaam\n");
    break;
    case 2:
    printf("aadab\n");
    break;
    case 3:
    printf("hello\n");
    break;
    default:
    printf("incorrect option\n");

   }
    
    return 0;
}