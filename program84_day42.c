/*Q84: Convert a lowercase string to uppercase without using built-in functions.


Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program84_day42.c -o program84_day42.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program84_day42.out
hello
HELLO
C:\Users\Asus\OneDrive\Desktop\C FILES>