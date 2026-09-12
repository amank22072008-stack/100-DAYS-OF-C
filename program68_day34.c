/*Q68: Delete an element from an array.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, a[100], pos;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++) {
        for (int j = i; j < i + 1; j++) {
            a[j] = a[j + 1];
        }
    }

    n--;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program68_day34.c -o program68_day34.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program68_day34.out
5
1 2 3 4 5
2
1 3 4 5
C:\Users\Asus\OneDrive\Desktop\C FILES>