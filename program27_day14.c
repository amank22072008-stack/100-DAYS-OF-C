/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }

    printf("%d", sum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program27_day14.c -o program27_day14.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program27_day14.out
3
9
C:\Users\Asus\OneDrive\Desktop\C FILES>program27_day14.out
5
25
C:\Users\Asus\OneDrive\Desktop\C FILES>