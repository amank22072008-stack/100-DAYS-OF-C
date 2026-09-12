/*Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main() {
    int n, a[100], pos, value;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &value);

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[pos] = value;

    n++;

    // Print the array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program67_day34.c -o program67_day34.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program67_day34.out
4
10 20 30 40
2 15
10 20 15 30 40
C:\Users\Asus\OneDrive\Desktop\C FILES>