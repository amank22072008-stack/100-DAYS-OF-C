/*Q62: Reverse an array without taking extra space.


Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main() {
    int n, a[100], i, temp;

    scanf("%d", &n);

    // Input array
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse using swapping
    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    // Print reversed array
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program62_day31.c -o program62_day31.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program62_day31.out
4
1 2 3 4
4 3 2 1
C:\Users\Asus\OneDrive\Desktop\C FILES>