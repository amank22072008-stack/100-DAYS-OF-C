/*Q82: Print each character of a string on a new line.


Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program82_day41.c -o program82_daay41.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program82_day41.out
Hi
H
i

C:\Users\Asus\OneDrive\Desktop\C FILES>