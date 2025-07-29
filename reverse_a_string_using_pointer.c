 #include <stdio.h>
#include<string.h>
int main(){
    //reverse a string using pointers
    char name[20];
    printf("enter the string");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int length=strlen(name);
    char* ptr=&name[length-1];
    for (int i = 0; i < length; i++)
    {
        char a=*ptr;
        printf("%c",a);
        ptr--;
    }
    
    
   
    return 0;
}