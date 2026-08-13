/*Q8: Write a program to find and display the sum of the first n natural numbers.


Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum=%d", sum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program8_day4.c -o program8_day4.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program8_day4.out
5
Sum=15
C:\Users\Asus\OneDrive\Desktop\C FILES>program8_day4.out
10
Sum=55
C:\Users\Asus\OneDrive\Desktop\C FILES>