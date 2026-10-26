/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], destination[100];
    int ch;

    scanf("%99s", source);
    scanf("%99s", destination);

    src = fopen(source, "r");

    if (src == NULL) {
        printf("Source file not found");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL) {
        printf("Cannot create destination file");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destination);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program124_day74.c -o program124_day74.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program124_day74.out
source.txt
destination.txt
Source file not found
C:\Users\Asus\OneDrive\Desktop\C FILES>