/*Q56: Read and print elements of a one-dimensional array.


Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

C:\>CD C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program56_day28.c -o program56_day28.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program56_day28.out
Enter number of elements: 3
Enter 3 elements:
10 20 30
Array elements are:
10 20 30
C:\Users\Asus\OneDrive\Desktop\C FILES>program56_day28.out
Enter number of elements: 5
Enter 5 elements:
1 2 3 4 5