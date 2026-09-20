/*Q86: Check if a string is a palindrome.


Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 1;

    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program86_day43.c -o program86_day43.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program86_day43.out
madam
Palindrome
C:\Users\Asus\OneDrive\Desktop\C FILES>program86_day43.out
hello
Not palindrome
C:\Users\Asus\OneDrive\Desktop\C FILES>