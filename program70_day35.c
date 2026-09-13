/*Q70: Rotate an array to the right by k positions.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main()
{
    int n, k, i, j, temp;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    // Rotate right by 1, k times
    for(i = 0; i < k; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program70_day35.c -o program70_day35.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program70_day35.out
5
1 2 3 4 5
2
4 5 1 2 3
C:\Users\Asus\OneDrive\Desktop\C FILES>

