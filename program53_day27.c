/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    int i, j;

    // Upper half
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program53_day27.c -o program53_day27.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program53_day27.out
*
***
*****
*******
*********
*******
*****
***
*

C:\Users\Asus\OneDrive\Desktop\C FILES>