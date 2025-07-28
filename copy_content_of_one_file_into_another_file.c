#include <stdio.h>
#include<stdlib.h>

int main(){
    char c;
    FILE* ptr;
    FILE* fp;
    ptr=fopen("n.text","r");
    fp=fopen("s.text","a");
    if (ptr == NULL || fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
 while((c=fgetc(ptr))!=EOF){
    
    fputc(c,fp);
 }
 fclose(ptr);
 fclose(fp);
 printf("data copied successfully");
    return 0;
}