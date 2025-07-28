#include <stdio.h>
typedef struct student{
    char name[30];
    int roll_no;
    float marks;
} stu;
int main(){
    stu details[5];
        for (int i = 0; i < 3; i++)
        {
          printf("write name of the student %d\n",i+1);
scanf("%s",details[i].name);
printf("write roll no of the student%d\n",i+1);
    scanf("%d",&details[i].roll_no);
    printf("write marks of the student%d\n",i+1);
    scanf("%f",&details[i].marks);  
        }
        printf("\n%-20s %-10s -%-10s\n","name","roll no","marks");
        for (int i = 0; i < 3; i++)
        {
           printf("%-20s %-10d -%-10.2fs\n",details[i].name,details[i].roll_no,details[i].marks);
        }
        
    return 0;
}