/*Q36: Write a program to find the HCF (GCD) of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;

    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0) {
            if (b % i == 0) {
                hcf = i;
            }
        }
    }

    printf("%d", hcf);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program36_day18.c -o program36_day18.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program36_day18.out
12 18
6
C:\Users\Asus\OneDrive\Desktop\C FILES>program36_day18.out
7 9
1
C:\Users\Asus\OneDrive\Desktop\C FILES>