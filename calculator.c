#include <stdio.h>

int main(){
    int a,b;
    char cont;
    char op;
    do {
    printf("write a\n");
    scanf("%d",&a);
    printf("write b\n");
    scanf("%d",&b);
    printf("select operator +,-,*,/,%%\n");
    scanf(" %c",&op);
    switch (op)
    {
    case '+' :
         printf("sum =%d\n",a+b);
        break;
        case '-':
 printf("difference =%d\n",a-b);
 break;
 case '*':
  printf("product=%d\n",a*b);
    break;
    case '/':
     printf("division =%d\n",a/b);
     break;
      printf("remainde =%d\n",a%b);
      break;

    default:
    printf("please enter a valid operator\n");
        break;
    }
    printf("press y to continue");
    scanf(" %c",&cont);
} while(cont=='y'||cont=='Y');



    return 0;
}