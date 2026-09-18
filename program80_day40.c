/*Q80: Multiply two matrices.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;

    scanf("%d %d", &r1, &c1);

    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);

    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if(c1 != r2) {
        printf("Not possible");
        return 0;
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            c[i][j] = 0;
            for(k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program80_day40.c -o program80_day40.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program80_day40.out
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
58 64
139 154

C:\Users\Asus\OneDrive\Desktop\C FILES>