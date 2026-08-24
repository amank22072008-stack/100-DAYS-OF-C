/*Q30: Write a program to reverse a given number.


Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int n, reverse = 0, digit;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program30_day15.c -o program30_day15.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program30_day15.out
1234
4321
C:\Users\Asus\OneDrive\Desktop\C FILES>program30_day15.out
100
1
C:\Users\Asus\OneDrive\Desktop\C FILES>