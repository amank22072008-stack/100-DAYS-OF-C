/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.


Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>

int main() {
    FILE *fp;
    int ch, characters = 0, words = 0, lines = 0;
    int inWord = 0, last = '\n';

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("File creation failed!");
        return 1;
    }

    fprintf(fp, "Hello world\nThis is C programming");
    fclose(fp);

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("File opening failed!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if (characters > 0 && last != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program123_day73.c -o program123_day73.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program123_day73.out
Characters: 33
Words: 6
Lines: 2

C:\Users\Asus\OneDrive\Desktop\C FILES>