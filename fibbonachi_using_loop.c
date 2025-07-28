#include <stdio.h>

int main(){
    int terms;
    printf("write number of terms");
    scanf("%d",&terms);
    int pre;
    int pre_pre;
    int sum;
    for (int i = 1  ; i<=terms; i++)
    {
        if(i==1){
            sum=1;
            pre=0;
            pre_pre=0;
        }
        else{
            pre_pre=pre;
            pre=sum;
            sum=pre+pre_pre;
        }
        printf("%d",sum);
    }
    
    return 0;
}