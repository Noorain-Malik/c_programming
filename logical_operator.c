#include <stdio.h>

int main(){
    int a = 10, b = 5;
    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0));
    printf("!(a == b): %d\n\n", !(a == b));
    return 0;
}