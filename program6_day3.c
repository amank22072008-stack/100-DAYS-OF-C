/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main() {
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program6_day3.c -o program6_day3.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program6_day3.out
3 5
After swap: 5 3
C:\Users\Asus\OneDrive\Desktop\C FILES>program6_day3.out
-1 1
After swap: 1 -1
C:\Users\Asus\OneDrive\Desktop\C FILES>