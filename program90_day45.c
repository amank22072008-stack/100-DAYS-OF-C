/*Q90: Toggle case of each character in a string.


Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program90_day45.c -o program90_day45.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program90_day45.out
Hello
hELLO

C:\Users\Asus\OneDrive\Desktop\C FILES>