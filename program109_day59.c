/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
    int arr[100];
    int n, k;
    int i;
    int sum = 0;
    int maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        sum = sum + arr[i];
    }

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program109_day59.c -o program109_day59.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program109_day59.out
4
100 200 300 400
2
700
C:\Users\Asus\OneDrive\Desktop\C FILES>program109_day59.out
9
1 4 2 10 23 3 1 0 20
4
39
C:\Users\Asus\OneDrive\Desktop\C FILES>program109_day59.out
4
100 200 300 400
1
400
C:\Users\Asus\OneDrive\Desktop\C FILES>

