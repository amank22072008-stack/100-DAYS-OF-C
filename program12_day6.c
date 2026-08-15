/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0) {
            printf("Zero");
        } else {
            printf("Positive");
        }
    } else {
        printf("Negative");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program12_day6.c -o program12_day6.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program12_day6.out
Enter an integer: -5
Negative
C:\Users\Asus\OneDrive\Desktop\C FILES>program12_day6.out
Enter an integer: 0
Zero
C:\Users\Asus\OneDrive\Desktop\C FILES>program12_day6.out
Enter an integer: 10
Positive
C:\Users\Asus\OneDrive\Desktop\C FILES>