/*Q28: Write a program to print the product of even numbers from 1 to n.


Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d", product);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program28_day14.c -o program28_day14.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program28_day14.out
4
8
C:\Users\Asus\OneDrive\Desktop\C FILES>program28_day14.out
6
48
C:\Users\Asus\OneDrive\Desktop\C FILES>