/*Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        sum = 0;
    } else {
        while (n > 0) {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }
    }

    printf("%d", sum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program38_day19.c -o program38_day19.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program38_day19.out
123
6
C:\Users\Asus\OneDrive\Desktop\C FILES>program38_day19.out
999
27
C:\Users\Asus\OneDrive\Desktop\C FILES>