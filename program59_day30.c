/*Q59: Count even and odd numbers in an array.


Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main() {
    int n, a[100], even = 0, odd = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program59_day30.c -o program59_day30.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program59_day30.out
6
1 2 3 4 5 6
Even=3, Odd=3
C:\Users\Asus\OneDrive\Desktop\C FILES>program59_day30.out
4
2 4 6 8
Even=4, Odd=0
C:\Users\Asus\OneDrive\Desktop\C FILES>