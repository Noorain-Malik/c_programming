#include <stdio.h>
#include<string.h>
int isPalendrome(char* str){
    char* start=str;
    char* end=str+strlen(str)-1;
    while(start<end){
        if(*start!=*end)
            return 0;
            start++;
            end--;
        
    }
    return 1;
}

int main(){
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    if(isPalendrome(str)){
        printf("the string is palindrome\n");
    }
    else{
        printf("the string is not palindrome\n");
    }
    return 0;
}