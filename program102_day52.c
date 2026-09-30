/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.


Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

int main() {
    int a1[] = {1, 2, 8, 10, 11, 12, 19};
    int a2[] = {1, 2, 8, 10, 11, 12, 19};
    int a3[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int a4[] = {1, 1, 2, 8, 10, 11, 12, 19};

    int i, ans;

    ans = -1;
    for (i = 0; i < 7; i++) {
        if (a1[i] >= 5) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);

    ans = -1;
    for (i = 0; i < 7; i++) {
        if (a2[i] >= 20) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);

    ans = -1;
    for (i = 0; i < 8; i++) {
        if (a3[i] >= 0) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);

    ans = -1;
    for (i = 0; i < 8; i++) {
        if (a4[i] >= 2) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program102_day52.c -o program102_day52.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program102_day52.out
2
-1
0
2

C:\Users\Asus\OneDrive\Desktop\C FILES>

