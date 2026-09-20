/*Q85: Reverse a string.


Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    scanf("%s", str);

    // Find length
    while (str[len] != '\0') {
        len++;
    }

    // Print in reverse
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program85_day43.c -o program85_day43.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program85_day43.out
abcd
dcba
C:\Users\Asus\OneDrive\Desktop\C FILES>