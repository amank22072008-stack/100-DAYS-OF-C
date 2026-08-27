/*Q35: Write a program to print all factors of a given number.


Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i > 0) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program35_day18.c -o program35_day18.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program35_day18.out
6
1 2 3 6
C:\Users\Asus\OneDrive\Desktop\C FILES>program35_day18.out
10
1 2 5 10
C:\Users\Asus\OneDrive\Desktop\C FILES>