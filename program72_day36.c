/*Q72: Find the sum of all elements in a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main()
{
    int r, c, i, j;
    int a[100][100];
    int sum = 0;

    scanf("%d %d", &r, &c);

    // Input matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program72_day36.c -o program72_day36.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program72_day36.out
2 3
1 2 3
4 5 6
21
C:\Users\Asus\OneDrive\Desktop\C FILES>