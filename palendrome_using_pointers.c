// whether a string is palendrome using pointers
#include <stdio.h>
#include<string.h>

int main(){
    int palendrome=1;  
    char name[20];
    printf("enter the string");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int length=strlen(name);
    char* ptr=&name[0];
    for (int i = 0; i < length/2; i++)
    {
       if(*(ptr+i)!=*(ptr+length-1-i)){
       palendrome=0;
       break;
       }
    }
if(palendrome){
    printf("palendrome");
}
else{
    printf("not palendrome");
}

    
    return 0;
}