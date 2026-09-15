/*Q74: Find the transpose of a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main() {
    int a[100][100], r, c, i, j;

    scanf("%d %d", &r, &c);

    // Input matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print transpose
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program74_day37.c -o program74_day37.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program74_day37.out
2 3
1 2 3
4 5 6
1 4
2 5
3 6

C:\Users\Asus\OneDrive\Desktop\C FILES>