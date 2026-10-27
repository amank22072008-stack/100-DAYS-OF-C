/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.


Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program125_day75.c -o program125_day75.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program125_day75.out
Enter text: This is appended text
File updated successfully with appended text.
C:\Users\Asus\OneDrive\Desktop\C FILES>