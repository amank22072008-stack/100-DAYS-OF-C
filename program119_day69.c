/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int n, i, x;
    int arr[1000], seen[100000] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        x = arr[i];

        if (seen[x + 1] == 1) {
            printf("%d", x);
            return 0;
        }

        seen[x + 1] = 1;
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program119_day69.c -o program119_day69.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program119_day69.out
4
1 3 3 4
3
C:\Users\Asus\OneDrive\Desktop\C FILES>program119_day69.out
3
1 2 2
2
C:\Users\Asus\OneDrive\Desktop\C FILES>program119_day69.out
5
0 4 1 1 5
1
C:\Users\Asus\OneDrive\Desktop\C FILES>