  #include <stdio.h>
#include<ctype.h>

int main(){
    int chara=0;
    char ch;
    FILE* ptr;
   ptr=fopen("n.text","r+");
    if (ptr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }
    while((ch=fgetc(ptr))!=EOF){
      ch=tolower(ch);
      if( ch>=97 && ch<+122 && ch!='a' &&ch!='e' &&ch!='i' &&ch!='o'&&ch!='u')
        chara++;
      }
     fclose(ptr);
       printf("no of lines in file are %d",chara);
    return 0;
}