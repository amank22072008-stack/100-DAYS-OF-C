/*Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    scanf("%d", &n);

    if (n > 1) {
        if (n == 2) {
            printf("Prime");
        }
        else {
            for (i = 2; i < n; i++) {
                if (n % i == 0) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0) {
                printf("Prime");
            }
            else {
                printf("Not prime");
            }
        }
    }
    else {
        printf("Not prime");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program34_day17.c -o program34_day17.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program34_day17.out
7
Prime
C:\Users\Asus\OneDrive\Desktop\C FILES>program34_day17.out
10
Not prime
C:\Users\Asus\OneDrive\Desktop\C FILES>

