/*Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int n, first, last, digits, power, middle, result;

    scanf("%d", &n);

    if (n < 10) {
        result = n;
    } else {
        last = n % 10;

        digits = 0;
        int temp = n;

        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }

        power = 1;
        int i = 1;

        while (i < digits) {
            power = power * 10;
            i++;
        }

        first = n / power;
        middle = (n % power) / 10;

        result = last * power + middle * 10 + first;
    }

    printf("%d", result);

    return 0;
}	

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program41_day21.c -o program41_day21.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program41_day21.out
1234
4231
C:\Users\Asus\OneDrive\Desktop\C FILES>program41_day21.out
1001
1001
C:\Users\Asus\OneDrive\Desktop\C FILES>