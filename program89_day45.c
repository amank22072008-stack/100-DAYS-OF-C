/*Q89: Count frequency of a given character in a string.


Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program89_day45.c -o program89_day45.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program89_day45.out
progamming
g
2
C:\Users\Asus\OneDrive\Desktop\C FILES>