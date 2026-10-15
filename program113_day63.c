/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.


Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    int arr[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid k");
        return 0;
    }

    // Sort array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program113_day63.c -o program113_day63.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program113_day63.out
10
10 5 4 3 48 6 2 33 53 10
4
5

C:\Users\Asus\OneDrive\Desktop\C FILES>program113_day63.out
6
7 10 4 3 20 15
3
7

C:\Users\Asus\OneDrive\Desktop\C FILES>