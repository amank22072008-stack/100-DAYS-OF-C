/*Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int r, c, a[10][10], i, j, flag = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        for(j = i + 1; j < r; j++)
            if(a[i][i] == a[j][j])
                flag = 0;

    if(flag)
        printf("True");
    else
        printf("False");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program77_day39.c -o program77_day39.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program77_day39.out
3 3
1 2 3
4 5 6
7 8 1
False
C:\Users\Asus\OneDrive\Desktop\C FILES>program77_day39.out
3 3
1 2 3
4 5 6
7 8 9
True
C:\Users\Asus\OneDrive\Desktop\C FILES>