/*Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int n, a[100], x;
    int i, j, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    pos = n;

    /* Find position */
    for(i = 0; i < n; i++)
    {
        if(x < a[i])
        {
            pos = i;
            break;
        }
    }

    /* Shift elements to the right */
    for(j = n; j > pos; j--)
    {
        a[j] = a[j - 1];
    }

    /* Insert element */
    a[pos] = x;
    n++;

    /* Print array */
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program66_day33.c -o program66_day33.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program66_day33.out
5
1 2 4 5 6
3
1 2 3 4 5 6
C:\Users\Asus\OneDrive\Desktop\C FILES>