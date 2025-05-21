#include <stdio.h>

int main(){
    int a[3]={100,0,0};
    int i=0;
    int total=0;

    for( i=0;i<3;i++){
total=total+a[i];
    }
    printf("total = %d\n", total);

    if(total>=100&&a[0]>=30&&a[1]>=30&&a[2]>=30){
        printf("you have passed the exam\n");
    }
   else if(total<100&&(a[0]>=30&&a[1]>=30&&a[2]>=30)){
        printf("failed in aggriga\n");
    }
    else if (total<100&&(a[0]<30||a[1]<30||a[2]<30)){
        for(i=0;i<3;i++){
            if(a[i]<30){
                printf("you have reappear in sub%d\n" , i+1);
            }
        }
    }
else if (total>=100&&(a[0]<30||a[1]<30||a[2]<30)){
        for(i=0;i<3;i++){
            if(a[i]<30){
                printf("you have reappear in sub%d\n" , i+1);
            }
        }
    }

    
    return 0;
}