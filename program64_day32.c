/*Q64: Find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    long long n;
    int digit, temp, count, maxCount = 0, maxDigit = 0;

    scanf("%lld", &n);

    for (digit = 0; digit <= 9; digit++) {
        temp = n;
        count = 0;

        while (temp > 0) {
            if (temp % 10 == digit)
                count++;

            temp = temp / 10;
        }

        if (count > maxCount) {
            maxCount = count;
            maxDigit = digit;
        }
    }

    printf("%d", maxDigit);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program64_day32.c -o program64_day32.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program64_day32.out
112233
1
C:\Users\Asus\OneDrive\Desktop\C FILES>program64_day32.out
887799
7
C:\Users\Asus\OneDrive\Desktop\C FILES>