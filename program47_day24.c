/*Q47: Write a program to print the following pattern:
*
**
***
****
*****


Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program47_day24.c -o program47_day24.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program47_day24.out
*
**
***
****
*****

C:\Users\Asus\OneDrive\Desktop\C FILES>