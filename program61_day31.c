/*Q61: Search for an element in an array using linear search.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, a[100], key;
    int found = 0;

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Element to search
    scanf("%d", &key);

    // Linear search using loop
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program61_day31.c -o program61_day31.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program61_day31.out
5
1 2 3 4 5
3
Found at index 2
C:\Users\Asus\OneDrive\Desktop\C FILES>program61_day31.out
4
10 20 30 40
25
-1
C:\Users\Asus\OneDrive\Desktop\C FILES>