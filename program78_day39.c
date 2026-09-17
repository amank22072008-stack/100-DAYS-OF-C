/*Q78: Find the sum of main diagonal elements for a square matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int r, c, a[10][10], i, j, sum = 0;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(i == j)
                sum += a[i][j];

    printf("%d", sum);

    return 0;
}

C:\TDM-GCC-64>cd ..

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program78_day39.c -o program78_day39.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program78_day39.out
3 3
1 2 3
4 5 6
7 8 9
15
C:\Users\Asus\OneDrive\Desktop\C FILES>