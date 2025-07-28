#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int vowel_count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found or cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // Convert to lowercase for uniformity

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
    }

    fclose(fp);

    printf("Total number of vowels in the file: %d\n", vowel_count);

    return 0;
}