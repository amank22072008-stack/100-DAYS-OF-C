/*Q71: Read and print a matrix.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main()
{
    int r, c, i, j;
    int a[100][100];

    scanf("%d %d", &r, &c);

    // Input matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program71_day36.c -o program71_day36.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program71_day36.out
2 2
1 2
3 4
1 2
3 4

C:\Users\Asus\OneDrive\Desktop\C FILES>