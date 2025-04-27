#include <stdio.h>

int main(){
    int a, b, c;
    printf("write the value of a\n");
    scanf("%d" , &a);

    printf("write the value of b\n");
    scanf("%d" , &b);

    printf("write the value of c\n");
    scanf("%d" , &c);

    if(a>b && a>c ){
        printf("a is greater than %dand %d " , b , c);
    }
    else if(b>a && b>c){
        printf("b is greater than %d and %d" , a , c );
    }
    else if(c>b && c>a){
        printf("c is greater than %d and%d" , b , a );
    }
    return 0;
}