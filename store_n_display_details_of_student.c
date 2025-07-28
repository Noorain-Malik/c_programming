#include <stdio.h>
typedef struct student{
    char name[30];
    int roll_no;
    float marks;
} stu;

int main(){
stu s1;
printf("write name of the student");
scanf("%s",s1.name);
printf("write roll no of the student");
    scanf("%d",&s1.roll_no);
    printf("write marks of the student");
    scanf("%f",&s1.marks);

    printf("%s\n",s1.name);
    printf("%d",s1.roll_no);
    printf("%f",s1.marks);
    return 0;
}