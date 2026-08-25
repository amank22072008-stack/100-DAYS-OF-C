/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;

    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program32_day16.c -o program32_day16.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program32_day16.out
121
Palindrome
C:\Users\Asus\OneDrive\Desktop\C FILES>program32_day16.out
123
Not palindrome
C:\Users\Asus\OneDrive\Desktop\C FILES>

