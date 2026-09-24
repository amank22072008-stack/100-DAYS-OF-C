/*Q92: Find the first repeating lowercase alphabet in a string.


Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c", str[i]);
                return 0;
            }
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program92_day46.c -o program92_day46.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program92_day46.out
stress
s
C:\Users\Asus\OneDrive\Desktop\C FILES>

