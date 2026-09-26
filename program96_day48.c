/*Q96: Reverse each word in a sentence without changing the word order.


Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            int j;

            for (j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program96_day48.c -o program96_day48.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program96_day48.out
I love coding
I evol gnidoc
C:\Users\Asus\OneDrive\Desktop\C FILES>