/*Q31: Write a program to take a number as input and print its equivalent binary representation.


Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    }
    else {
        while (n > 0) {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        while (i > 0) {
            i--;
            printf("%d", binary[i]);
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program31_day16.c -o program31_day16.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program31_day16.out
10
1010
C:\Users\Asus\OneDrive\Desktop\C FILES>program31_day16.out
7
111
C:\Users\Asus\OneDrive\Desktop\C FILES>