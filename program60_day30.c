/*Q60: Count positive, negative, and zero elements in an array.


Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main() {
    int n, a[100];
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Count positive, negative and zero
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d",
           positive, negative, zero);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program60_day30.c -o program60_day30.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program60_day30.out
5
-1 0 1 2 -2
Positive=2, Negative=2, Zero=1
C:\Users\Asus\OneDrive\Desktop\C FILES>