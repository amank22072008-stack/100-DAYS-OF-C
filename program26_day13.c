/*Q26: Write a program to print numbers from 1 to n.


Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program26_day13.c -o program26_day13.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program26_day13.out
5
1 2 3 4 5
C:\Users\Asus\OneDrive\Desktop\C FILES>program26_day13.out
3
1 2 3
C:\Users\Asus\OneDrive\Desktop\C FILES>