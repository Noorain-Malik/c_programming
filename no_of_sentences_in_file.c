#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int sentence_count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found or cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '.' || ch == '?' || ch == '!') {
            sentence_count++;
        }
    }

    fclose(fp);

    printf("Total number of sentences in the file: %d\n", sentence_count);

    return 0;
}