/*Q75: Add two matrices.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int a[10][10], b[10][10];
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program75_day38.c -o program75_day38.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program75_day38.out
2 2
1 2
3 4
2 2
5 6
7 8
6 8
10 12

C:\Users\Asus\OneDrive\Desktop\C FILES>