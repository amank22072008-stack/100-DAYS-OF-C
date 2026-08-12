/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",
           a + b, a - b, a * b, a / b);

    return 0;
}

C:\TDM-GCC-64>cd ..

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program1_day.c -o program1_day.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program1_day.out
10 2
Sum=12, Diff=8, Product=20, Quotient=5
C:\Users\Asus\OneDrive\Desktop\C FILES>program1_day.out
7 3
Sum=10, Diff=4, Product=21, Quotient=2
C:\Users\Asus\OneDrive\Desktop\C FILES>