/*Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int a[10][10], n, i, j, flag = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                flag = 0;

    if(flag)
        printf("True");
    else
        printf("False");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program76_day38.c -o program76_day38.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program76_day38.out
2 2
1 2
2 1
False
C:\Users\Asus\OneDrive\Desktop\C FILES>program76_day38.out
2 2
1 0
2 1
False
C:\Users\Asus\OneDrive\Desktop\C FILES>