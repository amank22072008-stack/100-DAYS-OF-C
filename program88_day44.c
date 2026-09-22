/*Q88: Replace spaces with hyphens in a string.


Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program88_day44.c -o program88_day44.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program88_day44.out
hello world
hello-world

C:\Users\Asus\OneDrive\Desktop\C FILES>