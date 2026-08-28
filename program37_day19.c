/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int a, b, lcm;

    scanf("%d %d", &a, &b);

    if (a > 0) {
        if (b > 0) {
            if (a > b)
                lcm = a;
            else
                lcm = b;

            while (1) {
                if (lcm % a == 0) {
                    if (lcm % b == 0) {
                        break;
                    }
                }
                lcm++;
            }

            printf("%d", lcm);
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program37_day19.c -o program37_day19.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program37_day19.out
4 5
20
C:\Users\Asus\OneDrive\Desktop\C FILES>program37_day19.out
7 3
21
C:\Users\Asus\OneDrive\Desktop\C FILES>