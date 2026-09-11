/*Q65: Search in a sorted array using binary search.


Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, a[100], key;
    int low, high, mid, found = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Found at index %d", mid);
            found = 1;
            break;
        }
        else if (a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program65_day33.c -o program65_day33.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program65_day33.out
5
1 3 5 7 9
7
Found at index 3
C:\Users\Asus\OneDrive\Desktop\C FILES>program65_day33.out
5
1 3 5 7 9
6
-1
C:\Users\Asus\OneDrive\Desktop\C FILES>

