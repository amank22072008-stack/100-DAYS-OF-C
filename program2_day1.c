/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>

int main() {
    int a, b, sum;

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program2_day1.c -o program2_day1.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program2_day1.out
3
4
Sum = 7
C:\Users\Asus\OneDrive\Desktop\C FILES>program2_day1.out
-1
20
Sum = 19
C:\Users\Asus\OneDrive\Desktop\C FILES>