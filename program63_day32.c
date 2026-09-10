/*Q63: Merge two arrays.


Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n, m;
    int a[100], b[100], c[200];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Copy first array
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }

    // Copy second array
    for (int i = 0; i < m; i++) {
        c[n + i] = b[i];
    }

    // Print merged array
    for (int i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program63_day32.c -o program63_day32.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program63_day32.out
3
1 2 3
2
4 5
1 2 3 4 5
C:\Users\Asus\OneDrive\Desktop\C FILES>