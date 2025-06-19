#include <stdio.h> 
int main() { 
char str[100]; 
printf("Enter a string: "); 
scanf("%s", str); // Read string input (no spaces) 
printf("You entered: %s\n", str); 
return 0;
}

                             //or
   /*#include<stdio.h>
   int main() { 
char str[100]; 
printf("Enter a string: "); 
fgets(str, sizeof(str), stdin); // Reads entire line including spaces 
printf("You entered: %s", str); 
return 0;
}
   */                          