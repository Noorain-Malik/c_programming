#include <stdio.h>
int fibbonachi(int);
int fibbonachi(int a){
   if(a==1||a==2){
            return a-1;
        }
    
    else{
     return fibbonachi(a-1)+fibbonachi(a-2);
    }
    
}
int main(){
    int term;
    printf("write the term");
    scanf("%d" ,&term);
    int c =fibbonachi(term);
    printf("the %d term of this fibbonachi is %d" ,term,c);
    return 0;
}