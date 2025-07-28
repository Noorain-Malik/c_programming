#include <stdio.h>
#include<stdlib.h>

int main(){
    int line=1;
    char ch;
    FILE* ptr;
   ptr=fopen("n.text","r+");
    if (ptr == NULL) {
        printf("File could not be opened.\n");
        exit(1);
    }
    while((ch=fgetc(ptr))!=EOF){
      
       if(ch=='\n'){
         line+=1;
       }
    }
    fclose(ptr);
       printf("no of lines in file are %d",line);
    return 0;
}