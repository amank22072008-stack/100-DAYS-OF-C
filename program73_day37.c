/*Q73: Find the sum of each row of a matrix and store it in an array.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[100][100], sum[100];

    scanf("%d %d", &r, &c);

    // Input matrix
    for (i = 0; i < r; i++) {
        sum[i] = 0;

        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }

    // Print row sums
    for (i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program73_day37.c -o program73_day37.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program73_day37.out
2 3
1 2 3
4 5 6
6 15
C:\Users\Asus\OneDrive\Desktop\C FILES>