/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.


Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

int main() {
    int n, k, i, j, found;
    int arr[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        found = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("0");
        }

        if (i < n - k) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program111_day61.c -o program111_day61.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program111_day61.out
5
-8 2 3 -6 10
2
-8 0 -6 -6

C:\Users\Asus\OneDrive\Desktop\C FILES>program111_day61.out
8
12 -1 -7 8 -15 30 16 28
3
-1 -1 -7 -15 -15 0

C:\Users\Asus\OneDrive\Desktop\C FILES>program111_day61.out
4
12 1 3 5
3
0 0

C:\Users\Asus\OneDrive\Desktop\C FILES>