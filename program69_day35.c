/*Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() {
    int n, a[100], i, j, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array in descending order using nested loops
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%d", a[1]);

    return 0;
}

	C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program69_day35.c -o program69_day35.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program69_day35.out
5
10 20 30 40 50
40
C:\Users\Asus\OneDrive\Desktop\C FILES>
