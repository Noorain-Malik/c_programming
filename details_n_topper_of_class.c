#include <stdio.h>
typedef struct student{
     int roll_no;
    float marks;
} stu;
int main(){
    float max;
    int identity;
    stu details[5];
    for (int i = 0; i < 5; i++)
        {
          printf("write roll no of the student%d\n",i+1);
    scanf("%d",&details[i].roll_no);
    printf("write marks of the student%d\n",i+1);
    scanf("%f",&details[i].marks);  
        }
        max=details[0].marks;
        identity=details[0].roll_no;
        for (int i = 0; i < 5; i++)
        {
          if(details[i].marks>max){
            max=details[i].marks;
             identity=details[i].roll_no;
          }
        }
 printf("the topper is %d with marks %f",identity,max);
    return 0;
}