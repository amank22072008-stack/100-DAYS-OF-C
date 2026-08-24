/*Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("%lld", factorial);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program29_day15.c -o program29_day15.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program29_day15.out
5
120
C:\Users\Asus\OneDrive\Desktop\C FILES>program29_day15.out
3
6
C:\Users\Asus\OneDrive\Desktop\C FILES>